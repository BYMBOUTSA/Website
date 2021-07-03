/*
 > Ici nous allons modifier le programme précédent
 appelé exo_cond.c en y ajoutant la conditions switch à la place des if

*/

#include <stdio.h>

int main(void) {

    //Déclaration de nos variables
    int som_achats = 0, som_donnee = 0, monnaie = 0;
    int bill500 = 0, bill200 = 0, bill100 = 0, bill50 = 0, bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;

    //Demande à l'utilisateur de saisir le montant des achats et la somme donnée
    printf("Entrez le montant de total des achats : %d\n");
    scanf("%d", &som_achats);
    printf("Entrez la somme donnée : %d\n");
    scanf("%d", &som_donnee);


    //S'assurer que la somme donnée est bien supérieure à la somme des achats
    if(som_donnee < som_achats) {
        printf("Vous avez donné une somme insuffisante.\n");
        return -1;
    }

    //Gérer le cas où on aurait la somme donnée égal au montant des achats
    else if(som_donnee == som_achats) {
        printf("Vous n'avez pas de monnaie.\n");
        printf("Toute l'équipe de Charly\n");
        printf("Vous remercie pour votre visite\n");
        return 0;
    }



    return 0;
}