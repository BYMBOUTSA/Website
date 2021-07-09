/*********************************************
 *       EXERCICE SUR LES BOUCLES            *
 * ******************************************/

/*
    > Ecrire un programme qui calcule la somme des entiers d'un nombre à un autre (maximum : entre 1 et 1000)

    > Indications :
        - Prévoir le cas où "min" serait plus grand que "max" et quitter le programme
        si cela arrive.
        - Prévoir le cas où "min" serait plus petit que 1 et "max" plus grand 
        que 1000. 

*/

#include <stdio.h>

int main(void) {

    //Déclaration de nos variables
    int min = 0, max = 0, somme = 0;

    //Demande à l'utilisateur d'entré un nombre min
    printf("Entrez un nombre MIN (entre 1 et 1000) : ");
    scanf("%d", &min);

    //Prévoir le cas ou min < 1
    if(min < 1) {
        printf("MIN trop petit !\n");
        return -1;
    }

    //Demande à l'utilisateur d'entré un nombre max
    printf("Entrez un nombre MAX (entre 1 et 1000) : ");
    scanf("%d", &max);

    //Prévoir le cas ou max > 1000
    if(max > 1000) {
        printf("MAX trop grand !\n");
        return -1;
    }



    return 0;
}