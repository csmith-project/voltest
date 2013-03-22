/*BEGIN_LEGAL 
Intel Open Source License 

Copyright (c) 2002-2010 Intel Corporation. All rights reserved.
 
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.  Redistributions
in binary form must reproduce the above copyright notice, this list of
conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.  Neither the name of
the Intel Corporation nor the names of its contributors may be used to
endorse or promote products derived from this software without
specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE INTEL OR
ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
/*
 *  This file contains an ISA-portable PIN tool for tracing memory accesses.
 */

#include <stdio.h>
#include <climits>
#include <cerrno>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <algorithm>
#include "pin.H"

#define WRITE_MODE 1
#define READ_MODE 2

/* checksum computation from CSmith */
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static uint64_t seed;

static uint64_t GenSeed(void)
{
  int64_t l;
  asm volatile(   "rdtsc\n\t"
                : "=A" (l)
        );
  return l;
}

static uint64_t GenRand(void)
{
  return lrand48();
}

static void Crc32Gentab (void)
{
    uint32_t crc;
    const uint32_t poly = 0xEDB88320UL;
    int i, j;

    for (i = 0; i < 256; i++) {
        crc = i;
        for (j = 8; j > 0; j--) {
            if (crc & 1) {
                crc = (crc >> 1) ^ poly;
            } else {
                crc >>= 1;
            }
        }
        crc32_tab[i] = crc;
    }
}

static void Crc32Byte (uint8_t b)
{
    crc32_context =
        ((crc32_context >> 8) & 0x00FFFFFF) ^
        crc32_tab[(crc32_context ^ b) & 0xFF];
}

static void Crc32(uint64_t val)
{
    Crc32Byte ((val>>0) & 0xff);
    Crc32Byte ((val>>8) & 0xff);
    Crc32Byte ((val>>16) & 0xff);
    Crc32Byte ((val>>24) & 0xff);
    Crc32Byte ((val>>32) & 0xff);
    Crc32Byte ((val>>40) & 0xff);
    Crc32Byte ((val>>48) & 0xff);
    Crc32Byte ((val>>56) & 0xff);
}

static void DumpChecksum()
{
    cout << "vol_access_checksum = " << uppercase << hex << (crc32_context ^ 0xFFFFFFFFUL) << "\n";
}

class VolElem {
public:
    VolElem(const string &name, ADDRINT addr, size_t sz_, BOOL is_pointer);
        
    ~VolElem(void);

    ADDRINT get_addr() { return addr_; }

    std::string get_name() { return name_; }

    size_t get_size() { return sz_; }

    VolElem *get_next() { return next_; }

    BOOL is_pointer() { return is_pointer_; }

    BOOL in_range(ADDRINT addr, size_t sz) {
        return ((addr == addr_) ||
                ((addr > addr_) && (addr < (addr_ + sz_))) ||
                ((addr < addr_) && ((addr + sz) > addr_)));
/*
        return (((addr >= addr_) && (addr < (addr_+sz_))) ||
                ((addr_ > addr) && (addr_ < (addr+sz))));
*/
    }

    void set_next(VolElem *next) { next_ = next; }

    void inc_read_counts(ADDRINT addr, size_t sz);

    void inc_write_counts(ADDRINT addr, size_t sz);

    void add_byte_values(ADDRINT addr, size_t sz, unsigned int mode);

    void compute_checksum();

    void dump_summary();

    void dump_verbose();

private:

    void inc_counts(vector<unsigned int> &counts, ADDRINT addr, size_t sz);

    BOOL is_in_range(ADDRINT addr, size_t sz);

    const string name_;

    const ADDRINT addr_;

    const size_t sz_;

    BOOL is_pointer_;

    VolElem *next_;

    vector<unsigned int> byte_write_counts_;

    vector<unsigned int> byte_read_counts_;

    vector<string> byte_values_;

    // unimplemented
    VolElem();

    VolElem(const VolElem &v);

    VolElem &operator=(const VolElem &v);
};

VolElem::VolElem(const string &name, ADDRINT addr, size_t sz, BOOL is_pointer)
    : name_(name),
      addr_(addr),
      sz_(sz),
      is_pointer_(is_pointer),
      next_(NULL),
      byte_write_counts_(sz, 0),
      byte_read_counts_(sz, 0)
{

}

VolElem::~VolElem()
{

}

BOOL
VolElem::is_in_range(ADDRINT addr, size_t sz)
{
    return ((addr == addr_) ||
            ((addr > addr_) && ((addr_ + sz_) < addr)) ||
            ((addr < addr_) && ((addr + sz) > addr_)));
}

void
VolElem::inc_counts(vector<unsigned int> &counts, ADDRINT addr, size_t sz)
{
    unsigned int start_pos;
    //if (!is_in_range(addr, sz))
    //    return;

    if (addr >= addr_)
        start_pos = (addr - addr_);
    else 
        start_pos = 0;

    for (size_t i = 0; i < sz; i++) {
        if ((i+start_pos) >= sz_)
            break;
        counts[i+start_pos] += 1;
    }
}

void
VolElem::inc_read_counts(ADDRINT addr, size_t sz)
{
    //cout << hex << "read: addr: 0x" << addr << ", sz: " << sz << ", addr_: 0x" << addr_ << ", sz_ : " << sz_ << endl;
    inc_counts(byte_read_counts_, addr, sz);
}

void
VolElem::inc_write_counts(ADDRINT addr, size_t sz)
{
    //cout << hex << "write: addr: 0x" << addr << ", sz: " << sz << ", addr_: " << addr_ << ", sz_ : " << sz_ << endl;
    inc_counts(byte_write_counts_, addr, sz);
}

void
VolElem::add_byte_values(ADDRINT addr, size_t sz, unsigned int mode)
{
    string m;
    
    if (mode == WRITE_MODE) {
        m = "write to";
    }
    else if (mode == READ_MODE) {
        m = "read from";
    }
    else {
        assert(0);
    }

    unsigned int start_pos;
    if (addr_ >= addr) {
        start_pos = (addr_ - addr);
    }
    else {
        start_pos = 0;
    }

    // cout << hex << "r: addr: 0x" << addr << ", size: " << sz << ", start_pos: " << start_pos << ", sz_: " << sz_ << endl;
    for(size_t i = start_pos; i < sz; i++) {
        if ((i - start_pos) >= sz_)
            break;

        ostringstream ss;
        unsigned int value = 0;

        PIN_SafeCopy(&value, (char*)(addr+i), 1);
        ss << "name:" << name_ << ", ";
        ss << m << " addr: " << hex << (addr+i) << ", ";
        ss << "value: " << hex << value << endl;
        byte_values_.push_back(ss.str());
    }
}

void VolElem::compute_checksum()
{
    for(size_t i = 0; i < sz_; i++) {
        if (byte_read_counts_[i] > 0)
            Crc32(byte_read_counts_[i]);
        if (byte_write_counts_[i] > 0)
            Crc32(byte_write_counts_[i]);
    }
}

void
VolElem::dump_summary()
{
    for(size_t i = 0; i < sz_; i++) {
        if ((byte_write_counts_[i] == 0) && (byte_read_counts_[i] == 0))
            continue;

        cout << name_ << ": ";
        //cout << "0x" << hex << (addr_+i) << ": ";
        cout << i << ": ";
        cout << byte_read_counts_[i] << " reads, " << byte_write_counts_[i] << " writes" << endl;
    }
}

void
VolElem::dump_verbose()
{
    vector<string>::iterator i;

    for(i = byte_values_.begin(); i != byte_values_.end(); ++i) {
        cout << (*i);
    }
}

/////////////////////////////////////////////////////////////////////////

FILE * trace;

static VolElem *vol_head;

static BOOL logging = FALSE;

static BOOL enable_random_reads = FALSE;

static std::string global_checksum_var = "crc32_context";

static VolElem *checksum_elem;

enum OUTPUT_MODE {
    M_CHECKSUM,
    M_SUMMARY,
    M_VERBOSE,
};

static enum OUTPUT_MODE output_mode = M_CHECKSUM;

KNOB<string> KnobInputFile(KNOB_MODE_WRITEONCE, "pintool",
    "vol-input", "", "specify input file which contains volatile addresses");

KNOB<string> KnobOutputMode(KNOB_MODE_WRITEONCE, "pintool",
    "output-mode", "checksum", "specify the dump mode [checksum|summary|verbose]");

KNOB<string> KnobChecksumVar(KNOB_MODE_WRITEONCE, "pintool",
    "checksum-var", "crc32_context", "specify the name of the global variable which holds the checksum value");

KNOB<BOOL> KnobRandomRead(KNOB_MODE_WRITEONCE, "pintool",
    "random-read", "0", "feed a random values to a volatile read");

KNOB<uint64_t> KnobSeed(KNOB_MODE_WRITEONCE, "pintool",
    "seed", "0", "seed");

static void SplitString(const string &str, vector<string> &v, const char sep_char)
{
    size_t pos = 0;
    size_t start_pos = 0;
    while(true) {
        start_pos = pos;
        pos = str.find_first_of(sep_char, pos);
        std::string s = str.substr(start_pos, (pos - start_pos));
        if (!s.empty())
            v.push_back(s);
        if (pos == string::npos)
            break;
        pos++;
    }
}

static unsigned long StrToLong(const char *s, int base)
{
    char *endptr = NULL;
    long val;

    val = strtol(s, &endptr, base);
    
    assert(!((errno == ERANGE) && (val == LONG_MAX || val == LONG_MIN))
            || (errno != 0 && val == 0) || (endptr == s));
    return val;
}

static BOOL EmptyLine(const std::string &line)
{
    if (line.empty())
        return true;
    size_t found = line.find_first_not_of("\t\n ");
    return (found == string::npos);
}

static VolElem *ParseLine(const string &line)
{
    vector<string> tuple;
    SplitString(line, tuple, ';');
    assert(tuple.size() == 4);
    
    ADDRINT addr = StrToLong(tuple[1].c_str(), 16);
    size_t size = StrToLong(tuple[2].c_str(), 10);
  
    BOOL is_pointer;
    std::string type = tuple[3];
    type.erase(std::remove(type.begin(), type.end(), ' '), type.end());
    if (type == "pointer") {
        is_pointer = true;
    }
    else if (type == "non-pointer") {
        is_pointer= false;
    }
    else {
        assert(0 && "bad type!");
    }
    VolElem *elem = new VolElem(tuple[0], addr, size, is_pointer);
    return elem;
}

static void AddVolElem(VolElem *elem)
{
   elem->set_next(vol_head);
   vol_head = elem;
}

static int InitVolTable(const string &fname)
{
    if (fname.empty())
        return -1;

    ifstream vols(fname.c_str());
    if (!vols.is_open()) {
        cerr << "Can't open input file: " << fname << endl;
        return -1;
    }

    string line;
    while(!vols.eof()) {
        VolElem *elem = NULL;
        getline(vols, line);
        if (EmptyLine(line)) {
            continue;
        }
        elem = ParseLine(line);
        assert(elem);
        if (!elem->get_name().compare(global_checksum_var)) {
            checksum_elem = elem;
            continue;
        }
        AddVolElem(elem);
    }
    vols.close();
    return 0;
}

static void DumpCsmithChecksum()
{
    if (!checksum_elem)
        return;

    uint32_t value;
    PIN_SafeCopy(&value, (char*)(checksum_elem->get_addr()), checksum_elem->get_size());
    uint32_t checksum = value ^ 0xFFFFFFFFUL;
    cout << "checksum = " << uppercase << hex << checksum << endl;
}

static void DumpVolTable()
{
    VolElem *elem = vol_head;

    if (output_mode == M_CHECKSUM)
        Crc32Gentab();

    while(elem) {
        switch (output_mode) {
        case M_CHECKSUM:
            elem->compute_checksum();
            break;
        case M_SUMMARY:
            elem->dump_summary();
            break;
        case M_VERBOSE:
            elem->dump_verbose();
            break;
        default:
            assert("Unknown output_mode!" && 0);
        }
        elem = elem->get_next();
    }

    if (output_mode == M_CHECKSUM)
        DumpChecksum();
}

static void FiniVolTable()
{
    VolElem *elem;
    while(vol_head) {
        elem = vol_head->get_next();
        delete vol_head;
        vol_head = elem;
    }
    vol_head = NULL;
}

static VolElem * IsVolAddress(ADDRINT addr, size_t sz, VolElem *curr_head)
{
    VolElem *elem = curr_head;
    while(elem) {
        if (elem->in_range(addr, sz)) {
            break;
        }
        else {
            elem = elem->get_next();
        }
    }
    return elem;
}

static void RecordMem(ADDRINT addr, ADDRINT sz, unsigned int mode)
{
    if (!logging)
        return;

    VolElem *elem = vol_head;
    BOOL good_mem_addr = false;
    BOOL has_pointer_value = false;
    
    while (elem != NULL) {
        if ((elem = IsVolAddress(addr, sz, elem)) != NULL) {
            //cout << "Yang: " << hex << " addr: 0x" << addr << ", size: " << sz << endl;
            if (mode == WRITE_MODE) {
                //cout << hex << "w: addr: 0x" << addr << ", size: " << sz << endl;
                elem->inc_write_counts(addr, sz);
            }
            else if (mode == READ_MODE) {
                //cout << hex << "r: addr: 0x" << addr << ", size: " << sz << endl;
                elem->inc_read_counts(addr, sz);
            }
            else {
                assert("bad mode!" && 0);
            }
      
            if (output_mode == M_VERBOSE) {
                elem->add_byte_values(addr, sz, mode);
            }

            good_mem_addr = true;
            if (elem->is_pointer()) {
                has_pointer_value = true;
            }
            elem = elem->get_next();
        }
    }
    if (enable_random_reads && good_mem_addr && !has_pointer_value) {
        uint64_t value = GenRand();
        PIN_SafeCopy((void*)addr, &value, sz);
    }
}

VOID RecordMemRead(ADDRINT addr, ADDRINT sz)
{
    RecordMem(addr, sz, READ_MODE);
}

VOID RecordMemWrite(ADDRINT addr, ADDRINT sz)
{
    RecordMem(addr, sz, WRITE_MODE);
}

// Print a memory write record
// Is called for every instruction and instruments reads and writes
VOID Instruction(INS ins, VOID *v)
{
    // Instruments memory accesses using a predicated call, i.e.
    // the instrumentation is called iff the instruction will actually be executed.
    //
    // The IA-64 architecture has explicitly predicated instructions. 
    // On the IA-32 and Intel(R) 64 architectures conditional moves and REP 
    // prefixed instructions appear as predicated instructions in Pin.
    UINT32 memOperands = INS_MemoryOperandCount(ins);

    // Iterate over each memory operand of the instruction.
    for (UINT32 memOp = 0; memOp < memOperands; memOp++)
    {
        if (INS_MemoryOperandIsRead(ins, memOp))
        {
            INS_InsertPredicatedCall(
                ins, IPOINT_BEFORE, (AFUNPTR)RecordMemRead,
                IARG_MEMORYOP_EA, memOp,
                IARG_MEMORYREAD_SIZE,
                IARG_END);

        }
        // Note that in some architectures a single memory operand can be 
        // both read and written (for instance incl (%eax) on IA-32)
        // In that case we instrument it once for read and once for write.
        if (INS_MemoryOperandIsWritten(ins, memOp))
        {
            BOOL flag = FALSE;
            if(INS_HasFallThrough(ins)) {
                INS_InsertPredicatedCall(
                    //ins, IPOINT_AFTER, (AFUNPTR)RecordMemWrite,
                    ins, IPOINT_BEFORE, (AFUNPTR)RecordMemWrite,
                    IARG_MEMORYOP_EA, memOp,
                    IARG_MEMORYWRITE_SIZE,
                    IARG_END);
                flag = TRUE;
            }

            if (!flag && INS_IsBranchOrCall(ins)) {
                INS_InsertPredicatedCall(
                    ins, IPOINT_TAKEN_BRANCH, (AFUNPTR)RecordMemWrite,
                    IARG_MEMORYOP_EA, memOp,
                    IARG_MEMORYWRITE_SIZE,
                    IARG_END);
            }
        }
    }
}

VOID StartLogging(void)
{
    logging = TRUE;
}

VOID StopLogging(void)
{
    logging = FALSE;
}

VOID Image(IMG img, VOID * v)
{
    RTN volInitRtn = RTN_FindByName(img, "main");

    if (RTN_Valid(volInitRtn)) {
        RTN_Open(volInitRtn);
        INS ins = RTN_InsHead(volInitRtn);
        if (!INS_Valid(ins))
          return;
        // start logging before the first instruction of main
        INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR)StartLogging, IARG_END);
        RTN_InsertCall(volInitRtn, IPOINT_AFTER, (AFUNPTR)StopLogging, IARG_END);
        RTN_Close(volInitRtn);
    }
}

VOID Fini(INT32 code, VOID *v)
{
    DumpCsmithChecksum();
    DumpVolTable();
    FiniVolTable();
}

static int SetOutputMode(const string &mode)
{
    if (!mode.compare("checksum")) {
        output_mode = M_CHECKSUM;
    }
    else if (!mode.compare("summary")) {
        output_mode = M_SUMMARY;
    }
    else if (!mode.compare("verbose")) {
        output_mode = M_VERBOSE;
    }
    else {
        cerr << "Invalid output mode: " << mode << endl;
        return -1;
    }
    return 0;
}

static int SetChecksumVar(const string &name)
{
    if (name == "") {
      cerr << "Invalid checksum var name!\n";
      return -1;
    }
    global_checksum_var = name;
    return 0; 
}

/* ===================================================================== */
/* Print Help Message                                                    */
/* ===================================================================== */
   
INT32 Usage()
{
    PIN_ERROR( "This Pintool prints a trace of memory addresses\n" 
              + KNOB_BASE::StringKnobSummary() + "\n");
    return -1;
}

/* ===================================================================== */
/* Main                                                                  */
/* ===================================================================== */

int main(int argc, char *argv[])
{
    PIN_InitSymbols();
    if (PIN_Init(argc, argv)) return Usage();

    if (SetOutputMode(KnobOutputMode.Value()))
        return Usage();
    if (SetChecksumVar(KnobChecksumVar.Value()))
        return Usage();

    enable_random_reads = KnobRandomRead.Value();
    if (enable_random_reads) {
        seed = KnobSeed.Value();
        if (!seed)
            seed = GenSeed();
        fprintf(stdout, "seed=%lu\n", seed);
        srand48(seed);
    }

    if (InitVolTable(KnobInputFile.Value())) {
        cerr << "InitVolTable Error" << endl;
        exit(-1);
    }

    IMG_AddInstrumentFunction(Image, 0);
    INS_AddInstrumentFunction(Instruction, 0);
    PIN_AddFiniFunction(Fini, 0);

    // Never returns
    PIN_StartProgram();
    
    return 0;
}
