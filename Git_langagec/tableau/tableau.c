#include <stdio.h>

int main(void) {
    //type nom[taille];
    int tab[3], taille = 3;

    //nom[clé/indice] = valeur;
    /* tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3; */
    //on peut aussi le faire ainsi
    for(int i = 0; i < taille; i++)
        tab[i] = i + 1;

   for(int i = 0; i < taille; i++)
    printf("Mon nombre tab[%d] vaut %d\n", i ,tab[i]);


    return 0;
}