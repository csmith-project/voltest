##===----------------------------------------------------------------------===
##
## Copyright (c) 2012 The University of Utah
## All rights reserved.
##
## This file is distributed under the University of Illinois Open Source
## License.  See LICENSE.TXT for details.
##
##===----------------------------------------------------------------------===

llvm_dir = ${LLVM_PATH}

ENABLE_FEATURE_ASSERT = -DENABLE_CHECKER_ASSERT
ifeq (${DISABLE_CHECKER_ASSERT}, 1)
  ENABLE_CHECKER_ASSERT = -DDISABLE_CHECKER_ASSERT
endif

CXX = g++
CXXFLAGS = -O0 -Wall -fno-strict-aliasing -g

LLVM_CXXFLAGS = `${llvm_dir}/bin/llvm-config --cxxflags`
LLVM_LDFLAGS = `${llvm_dir}/bin/llvm-config --ldflags`
#LLVM_LIBS = `${llvm_dir}/bin/llvm-config --libs | tr " " "\n" | grep -v 'gtest\|LLVMIntelJITEvents\|LLVMOProfileJIT'`
LLVM_LIBS = `${llvm_dir}/bin/llvm-config --libs`

INCLUDES = ${LLVM_CXXFLAGS} -I${llvm_dir}/include/clang/ -I.
LDFLAGS = ${LLVM_LDFLAGS}
LIBS = -lclangFrontendTool -lclangFrontend -lclangDriver -lclangSerialization \
       -lclangCodeGen -lclangParse -lclangSema -lclangAnalysis \
       -lclangEdit -lclangAST -lclangLex -lclangBasic \
       ${LLVM_LIBS} -ldl

CHECKER_SOURCES = VolatileChecker.cpp \
                  CheckerManager.cpp \
                  Checker.cpp

CHECKER_OBJS = VolatileChecker.o \
               CheckerManager.o \
               Checker.o
 
.SUFFIXES : .o .cpp
.cpp.o :
	${CXX} -g ${ENABLE_CHECKER_ASSERT} ${INCLUDES} ${CXXFLAGS} -c $<

volatile_checker: ${CHECKER_OBJS} 
	${CXX} -o volatile_checker ${CHECKER_OBJS} ${LDFLAGS} ${LIBS}

VolatileChecker.o: VolatileChecker.cpp

CheckerManager.o: CheckerManager.cpp

Checker.o: Checker.cpp

clean:
	rm -rf *.o

distclean:
	rm -rf *.o volatile_checker 

