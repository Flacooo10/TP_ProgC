#include <stdio.h>

int main() {
    int compteur = 5;  // change la valeur pour tester
    
    if (compteur >= 10) {
        printf("Le compteur doit etre strictement inferieur a 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        // première et dernière ligne : que des '*'
        if (i == 1 || i == compteur) {
            for (int j = 0; j < i; j++) {
                printf("* ");
            }
        } 
        else {
            // première étoile
            printf("* ");

            // milieu en '#'
            for (int j = 0; j < i - 2; j++) {
                printf("# ");
            }

            // dernière étoile
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
