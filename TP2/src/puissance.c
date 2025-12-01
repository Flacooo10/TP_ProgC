#include <stdio.h>

int main() {
    int a = 2;   // Base
    int b = 3;   // Exposant
    int resultat = 1; // Initialisation du résultat
    int i;

    // Boucle pour multiplier 'a' par lui-même 'b' fois
    for(i = 1; i <= b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est : %d\n", a, b, resultat);

    return 0;
}
