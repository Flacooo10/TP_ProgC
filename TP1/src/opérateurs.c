#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Opérateurs logiques / de comparaison
    printf("a == b : %d\n", (a == b));  // 0 = faux, 1 = vrai
    printf("a > b : %d\n", (a > b));    // 1 = vrai

    return 0;
}
