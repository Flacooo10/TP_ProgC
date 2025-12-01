#include <stdio.h>

int main() {
    int n, i;
    int u0 = 0, u1 = 1, un;

    // Demande à l'utilisateur le nombre de termes
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    // Afficher les deux premiers termes
    if (n >= 0) printf("%d ", u0);
    if (n >= 1) printf("%d ", u1);

    // Calculer et afficher les termes suivants
    for(i = 2; i <= n; i++) {
        un = u0 + u1;  // Calcul du terme suivant
        printf("%d ", un);
        u0 = u1;       // Mise à jour des termes précédents
        u1 = un;
    }

    printf("\n");
    return 0;
}
