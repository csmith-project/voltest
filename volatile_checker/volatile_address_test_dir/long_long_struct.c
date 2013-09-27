
struct S1 {
  char f1;
  volatile long long f2;
};

struct S2 {
  char f1;
  struct S1 f2;
};

struct S1 g1;
struct S2 g2;
