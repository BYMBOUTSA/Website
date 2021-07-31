#include <stdio.h>

/*
        fonctions permettent de scinder le code, d'alléger notre fonction main d'éviter de répeter des actions.
    > structure de la fonction:
    type_de_retour nom(parametre1, parametre2, ...) {
        corps_de_la_fonction
        return valeur_de_retour;
    }

*/

//---------------------------------------------------------------------------------

// Permet d'afficher Bonjour
void afficherBonjour() {
    printf("Bonjour Charly !\n");
}
//---------------------------------------------------------------------------------

// Pour calculer le carré d'un entier
int carre(int n) {
    return n * n;
}
//---------------------------------------------------------------------------------

//Pour calculer le maximum entre plusieurs nombres
/* int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;

} */
// on peut aussi faire la fonction maximum entre plusieurs nombre ainsi
int maximum(int a, int b) {
    int max;
    //afficherBonjour(); //si on veut afficher bonjour avant d'effectuer le calcul on imbrique la fonction afficherBonjour dans celle du calcul du maximum entre 2 nombres.

    if(a > b)
        max = a;
    else 
        max = b;
    return max;
}

//---------------------------------------------------------------------------------
int main(void) {
    int a, b;

    afficherBonjour();
    printf("Nombre dont vous souhaitez calculer le carré\n") ;
    scanf("%d", &a);

    //resultat = carre(a);

    printf("Le carré de %d = %d\n", a, carre(a));
    printf("Le calcul effecué est %d * %d = %d\n", a, a, carre(a));

    printf("Première valeur : ");
    scanf("%d", &a);

    printf("Deuxième valeur : ");
    scanf("%d", &b);

    printf("Maximum entre %d et %d : %d\n", a, b, maximum(a,b)); //si on veutajouter une troisième valeur printf("Maximum entre %d, %d et %d : %d\n", a, b, c, maximum(maximum(a, b), c));


    return 0;
}
