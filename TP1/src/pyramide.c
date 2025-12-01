#include <stdio.h>

int main() {
    int n = 5; // Hauteur de la pyramide
    int i, j;

    // Boucle pour chaque niveau de la pyramide
    for(i = 1; i <= n; i++) {
        // Affichage des espaces avant les nombres
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Affichage des nombres croissants
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Affichage des nombres décroissants
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passer à la ligne suivante
        printf("\n");
    }

    // Message de fin
    printf("Génération de la pyramide terminée.\n");

    return 0;
}
