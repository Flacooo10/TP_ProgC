#include <stdio.h>

int main() {
    int d = 1048592; // Exemple de valeur
    int bit4, bit20;

    // Vérification du 4ème bit de gauche (en supposant int sur 32 bits)
    bit4 = (d >> (32 - 4)) & 1;

    // Vérification du 20ème bit de gauche
    bit20 = (d >> (32 - 20)) & 1;

    // Vérification si les deux bits sont à 1
    if(bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
