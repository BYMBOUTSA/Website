/**************************************************************************************
 *                          FONCTIONS                                                 *
 * ***********************************************************************************/
#include <stdio.h>

int bonjour(void);

int init_ball(int posX); //Prototype de la fonction permettant d'indiquer au main qu'on à une fonction qui se trouve après

int main(void) {

    int balleX, retour_fonction;

    retour_fonction = bonjour();
    printf("Retour : %d\n", retour_fonction);
    balleX = init_ball(balleX);
    printf("Avant la partie : %d\n", balleX);

    //Une partie de jeu se fait...

    balleX = init_ball(balleX);
    printf("Après la partie : %d\n", balleX);



    return 0;
}

int init_ball(int posX) {
    posX = 100; //Cette variable peu importe son nom est différente de balleX de la fonction main
    return posX;
}

int bonjour(void) {
    printf("Bonjour Charly :) !\n");
    return 1;
    //return printf("Bonjour Charly :) !\n"); //Si on veut convertir le texte qui est dans printf en entier
}