#include <stdio.h>

int main() {

    signed char c1 = -10;
    unsigned char c2 = 200;

    signed short s1 = -300;
    unsigned short s2 = 600;

    signed int i1 = -20000;
    unsigned int i2 = 40000;

    signed long int li1 = -500000;
    unsigned long int li2 = 500000;

    signed long long int lli1 = -9000000000;
    unsigned long long int lli2 = 9000000000U;

    float f = 3.14f;
    double d = 6.28;
    long double ld = 12.56;

    printf("signed char : %d\n", c1);
    printf("unsigned char : %u\n", c2);

    printf("signed short : %d\n", s1);
    printf("unsigned short : %u\n", s2);

    printf("signed int : %d\n", i1);
    printf("unsigned int : %u\n", i2);

    printf("signed long int : %ld\n", li1);
    printf("unsigned long int : %lu\n", li2);

    printf("signed long long int : %lld\n", lli1);
    printf("unsigned long long int : %llu\n", lli2);

    printf("float : %f\n", f);
    printf("double : %f\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
