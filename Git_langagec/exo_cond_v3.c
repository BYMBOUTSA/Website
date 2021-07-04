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

    // cas ou la somme donnée est supérieur à celle des achats
    else {
        monnaie = som_donnee - som_achats; // on ne peut avoir de monnaie que si la somme donnée > montant des achats

        bill500 = monnaie / 500; //Pour savoir si on a un ou plusieurs billet(s) de 500 euros dans la monnaie
        monnaie %= 500; //On met le reste de la division précédente dans monnaie afin de l'utiliser par la suite pour savoir le reste des billet(s) qui nous manque

        bill200 = monnaie / 200;
        monnaie %= 200;

        bill100 = monnaie / 100;
        monnaie %= 100;

        bill50 = monnaie / 50;
        monnaie %= 50;

        bill20 = monnaie / 20;
        monnaie %= 20;

        bill10 = monnaie / 10;
        monnaie %= 10;

        bill5 = monnaie / 5;
        monnaie %= 5;

        coin2 = monnaie / 2;
        monnaie %= 2;

        coin1 = monnaie / 1;
        monnaie %= 1;


        

    }

    return 0;
}