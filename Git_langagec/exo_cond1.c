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

    //Cas où il y a la monnaie à rendre et çà doit être le moins de billets possible
    else {
        monnaie = som_donnee - som_achats; // On a la monnaie que si la somme donnée est supérieur à celle des achats

        bill500 = monnaie / 500; // Pour avoir le nombre de billet de 500 euros qu'il y a dans la monnaie
        monnaie %= 500; // on met le reste de notre division précédente dans monnaie afin de vérifier le reste en fonction de ce que l'on a déjà

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