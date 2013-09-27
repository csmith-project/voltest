
struct S1 {
  char f1;
  volatile int f2;
  long f3[10];
  volatile char f4[2];
};

struct S2 {
  struct S1 f1;
  volatile char f2[3];
};

volatile struct S2 g1[2];
struct S2 g2;
