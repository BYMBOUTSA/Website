#include <stdio.h>

int main(void) {

    //déclaration de nos variables en types entières
    int som_achats = 0, som_donnee = 0, monnaie = 0;
    int bill500 = 0, bill200 = 0, bill100 = 0, bill50 = 0, bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;

    //Demande à l'utilisateur de saisir le montant total des achats et la somme donnée
    printf("Entrez le montant total des achats : ");
    scanf("%d", &som_achats);
    printf("Entrez la somme donnée : ");
    scanf("%d", &som_donnee);


    //S'assurer que la somme donnée est bien supérieure à la somme des achats
    if(som_donnee < som_achats) {
        printf("Vous n'avez pas donné suffisament.\n");
        return -1; // pas obligé de faire çà
    }

    //Gérons le cas où on aurait payé un montant égal à celle des achats
    else if(som_donnee == som_achats) {
        printf("Vous n'avez pas de monnaie.\n");
        printf("Toute l'équipe de Charly\n");
        printf("Vous remercie pour votre visite\n");
        return 0; // pas obligatoire
    }

    //Le cas où il y a de la monnaie à rendre
    else {
        monnaie = som_donnee - som_achats; //on a la monnaie que si somme donnée est supérieur à celle des achats

        bill500 = monnaie / 500; // pour avoir le nombre de billet de 500 qu'il y a ou qu'il faut
        monnaie %= 500; //on met le reste de la division précédente afin de l'utiliser pour savoir s'il y a d'autre billet(s) ou pas

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


        //Nous allons maintenant faire des vérifications afin de savoir s'il y a certain billet ou pas s'il y en a pas on ne l'écrit pas
        if(bill500 > 0)
            printf("Billet(s) de 500 euros : %d\n", bill500);
        /* else
            printf("Billet(s) de 500 euros : %d\n", bill500); */
        if(bill200 > 0)
            printf("Billet(s) de 200 euros : %d\n", bill200);
        /* else
            printf("Billet(s) de 200 euros : %d\n", bill200); */
        if(bill100 > 0)
            printf("Billet(s) de 100 euros : %d\n", bill100);
        /* else
            printf("Billet(s) de 100 euros : %d\n", bill100); */
        if(bill50 > 0)
            printf("Billet(s) de 50 euros  : %d\n", bill50);
        /* else 
            printf("Billet(s) de 50 euros  : %d\n", bill50); */
        if(bill20 > 0)
            printf("Billet(s) de 20 euros  : %d\n", bill20);
        /* else
            printf("Billet(s) de 20 euros  : %d\n", bill20);  */
        if(bill10 > 0)
            printf("Billet(s) de 10 euros  : %d\n", bill10);
        /* else
            printf("Billet(s) de 10 euros  : %d\n", bill10); */
        if(bill5 > 0)
            printf("Billet(s) de 5 euros   : %d\n", bill5);
        /* else
            printf("Billet(s) de 5 euros   : %d\n", bill5); */
        if(coin2 > 0)
            printf("Pièce(s) de 2 euros    : %d\n", coin2);
        /* else    
            printf("Pièce(s) de 2 euros    : %d\n", coin1); */
        if(coin1 > 0)
            printf("Pièce(s) de 1 euro     : %d\n", coin1);
        /* else
            printf("Pièce(s) de 1 euro     : %d\n", coin1); */

    }


    return 0;
}