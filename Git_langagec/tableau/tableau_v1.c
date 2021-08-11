#include <stdio.h>

/*
    [Déclaration tableau]
        <type> <nom_tableau>[x]; //Déclare avec valeurs aléatoires

    [Initialisation]
        tableau[5] = {valeur1, valeur2, valeur3, valeur4, valeur5}; 
        tableau[5] = {0}; //Toutes les cases valent 0
        tableau[5] = {4}; //Première case à 4, le reste à 0

    [Accès au tableau]
        tableau[X]     : élément d'indice X (x+1ème élément du tableau)

        tableau        : adresse du tableau
        *tableau       : premier élément du tableau
        *(tableau + X) : élément d'indice X

        (NOTE)
            tableau[5] même chose que -> *(tableau + 5)
*/

#define TAILLE_TAB 5
#define NOMBRE_LIGNES 3
#define NOMBRE_COLONNES 2

int *creer_tableau(void);
void afficher_tableau(int tab[], int taille);

int main(void) {

    int i;
    int *tableau = creer_tableau();

    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");
    tableau[2] = -5;

    afficher_tableau(tableau, TAILLE_TAB);

    int damier[3][2] = { {1, 2},{3, 4},{5, 6} };
    int j, k;

    for(j = 0; j < NOMBRE_LIGNES; j++)
        for(k = 0; k < NOMBRE_COLONNES; k++) 
            printf("Element indice [%d][%d] = %d\n", j, k, damier[j][k]);


    return 0;
}

//-----------------------------------------------------------------------

int *creer_tableau(void) {

    static int tableau_entiers[5];
    int i;

    for(i = 0; i < 5; i++)
        tableau_entiers[i] = i * 3;

    return tableau_entiers;
}

//-----------------------------------------------------------------------

void afficher_tableau(int tab[], int taille) {
    int i;

    for(i = 0; i < taille; i++)
        printf("[%d] ", tab[i]);
    printf("\n");

}
