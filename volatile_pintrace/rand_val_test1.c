#include <stdio.h>

__attribute__ ((noinline)) void csmith_volatile_init(void);

static volatile int g = 1;

__attribute__ ((noinline)) void csmith_volatile_fini(FILE *fp)
{
    fclose(fp);
}

__attribute__ ((noinline)) void csmith_volatile_end(void)
{
}

__attribute__ ((noinline)) void csmith_volatile_init(void)
{
    FILE *fp = fopen("vol_addr.txt", "w");
    fprintf(fp, "&g; %p; %ld; non-pointer\n", &g, sizeof(int));
    fflush(fp);
    csmith_volatile_fini(fp);
}

int func_1(void)
{
    return g;
}

int main(void)
{
    int x;
    csmith_volatile_init();
    x = func_1();
    csmith_volatile_end();
    printf("x = %d\n", x);
    return 0;
}

