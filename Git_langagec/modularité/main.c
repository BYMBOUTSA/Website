#include <stdio.h>
#include "player.h"

int main(void) {
    int a, b, c, level = 15;
    AfficherBonjour();

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Le carré de %d est : %d\n", a, carre(a));
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);
    printf("Entrez la valeur de c : ");
    scanf("%d", &c);

    printf("Le maximum entre %d, %d et %d est : %d\n", a, b, c, maximum(maximum(a,b),c));

    printf("Niveau actuel : %d\n", level);

    level = reset_niveau();
    printf("Niveau après reset: %d\n", level);

    return 0;
}