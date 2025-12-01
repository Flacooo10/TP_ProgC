#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for(int k = 0; k < taille; k++) {
        int n = nombres[k];
        printf("Nombre : %d -> Binaire : ", n);

        // Affichage du binaire sur 32 bits
        for (int i = 31; i >= 0; i--) {
            int bit = (n >> i) & 1; // extraction du bit i
            printf("%d", bit);

            // option : espace toutes les 4 bits pour lisibilité
            if (i % 4 == 0) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
