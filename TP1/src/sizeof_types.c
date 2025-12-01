#include <stdio.h>

int main() {
    printf("Signed char: %zu bytes\n", sizeof(signed char));
    printf("Unsigned char: %zu bytes\n", sizeof(unsigned char));

    printf("Signed short: %zu bytes\n", sizeof(signed short));
    printf("Unsigned short: %zu bytes\n", sizeof(unsigned short));

    printf("Signed int: %zu bytes\n", sizeof(signed int));
    printf("Unsigned int: %zu bytes\n", sizeof(unsigned int));

    printf("Signed long: %zu bytes\n", sizeof(signed long));
    printf("Unsigned long: %zu bytes\n", sizeof(unsigned long));

    printf("Signed long long: %zu bytes\n", sizeof(signed long long));
    printf("Unsigned long long: %zu bytes\n", sizeof(unsigned long long));

    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));

    return 0;
}
