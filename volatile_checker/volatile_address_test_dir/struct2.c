struct S1 {
  long long f1;
  volatile char f2[3];
  volatile short f3;
};

struct S2 {
  volatile char f1[2];
  struct S1 f2[3];
};

struct S2 g1[4];
