#include <stdio.h>

int main() {
  
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -32000;
    unsigned short us = 65000;

    int i = -123456;
    unsigned int ui = 4000000000U;

    long int li = -123456789L;
    unsigned long int uli = 4000000000UL;

    long long int lli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %d\n", s);
    printf("unsigned short : %u\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
