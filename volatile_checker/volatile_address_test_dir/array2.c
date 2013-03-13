
struct S1 {
  int f1;
  volatile char f2;
};

struct S2 {
  struct S1 f1[10];
};

struct S2 g;
