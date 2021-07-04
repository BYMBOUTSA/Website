/*
    > Ici nous allons utiliser les ternaires à la place des if

*/

#include <stdio.h>

int main(void) {

    //Déclaration des varaiables en types entières
    int som_achats = 0, som_donnee = 0, monnaie = 0;
    int bill500 = 0, bill200 = 0, bill100 = 0, bill50 = 0, bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;

    //Demande à l'utilisateur de rentrer un montant total des achats puis la somme donnée
    printf("Entrez le montant total des achats : ");
    scanf("%d", &som_achats);
    printf("Entrez la somme donnée : ");
    scanf("%d", &som_donnee);


    //S'assurer que la somme donnée est bien supérieure au montant total des achats
    if(som_donnee < som_achats) {
        printf("Vous avez donné une somme insuffisantes.\n");
        return -1;
    }

    //Gérer le cas où on aurait donné une somme égal au montant total des achats 
    else if(som_donnee == som_achats) {
        printf("Vous n'avez pas de monnaie.\n");
        printf("L'équipe de Charly\n");
        printf("Vous remercie pour votre visite\n");
        return 0;
    }

    

    return 0;
}