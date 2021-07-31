#include <stdio.h>

void afficherBonjour() {
    printf("Bonjour Charly !\n");
}

//------------------------------------------------
//fonction pour calculer le carré d'un nombre
int carre(int n) {
    return n * n;
}

//------------------------------------------------
//fonction pour calculer le maximum
/* int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
} */
//------------------------------------------------
//autre manière de programmer la fonction maximum juste avec une valeur de retour cette foi-ci
int maximum(int a, int b) {
    int max;
    afficherBonjour();
    if(a > b)
        max = a;
    else
        max = b;
    return max;
    
}
//------------------------------------------------
//pour avoir le minimum de deux valeurs
/* int minimum(int a, int b) {
    //return (a > b) ? b : a;//avec le mode ternaire
    if(a > b)
        return b;
    else
        return a;
}  */
//------------------------------------------------
//autre manière de faire pour avoir le minimum de deux valeurs
int minimum(int a, int b) {
    int min;
    if(a > b)
        min = b;
    else
        min = a;
    return min;
}
//------------------------------------------------
//Pour avoir la valeur absolue d'un nombre
/* int absolu(int a) {
    if(a > 0) 
        return a;
    else
        return -a;

} */
//------------------------------------------------
//autre manière de faire la fonction absolu avec le mode ternaire
int absolu(int a) {
    return (a > 0) ? a : -a;
}
//------------------------------------------------
//Pour calculer la somme de deux nombres
int sum(int a, int b) {
    return a + b;   
}
//------------------------------------------------
//Pour calculer la différence entre deux nombres
int soust(int a, int b) {
    return a - b;
}
//------------------------------------------------
//Pour avoir la multiplication de deux nombres
int mult(int a, int b) {
    return a * b;
}
//------------------------------------------------
//Pour avoir la division de deux nombres
int div(int a, int b) {
    if(b > 0)
        return a / b;
    else if(b < 0) {
        printf("Erreur de saisie.\n");
        return -2;
    }
    else {
        printf("Math ERROR\n");
        return -1;
    }
}
//------------------------------------------------
//pour récupérer le reste de la division qui ne marche pas sur d'autre type que les entiers
int mod(int a, int b) {
    afficherBonjour();
    return a % b;
}
//------------------------------------------------
int main(void) {
    int a, b, c;

    afficherBonjour();

    printf("Nombre dont vous voulez calculé le carré\n");
    scanf("%d", &a);

    printf("Le carré de %d est : %d\n", a, carre(a));

    printf("Première valeur : ");
    scanf("%d", &a);
    printf("Deuxième valeur : ");
    scanf("%d", &b);
    printf("Troisième valeur : ");
    scanf("%d", &c);

    //Affichage
    printf("Le maximum entre %d et %d est : %d\n", a, b, maximum(a, b)); //maximum de deux nombres
    printf("Le minimum entre %d et %d est : %d\n", a, b, minimum(a, b)); //minimum de deux nombres
    printf("Le minimum entre %d, %d et %d est : %d\n", a, b, c, minimum(minimum(a, b), c));//manière d'imbriquer la même fonction pour y ajouter une autre valeur
    printf("La somme de %d et %d est : %d\n", a, b, sum(a, b)); //pour afficher l'addition de deux nombres
    printf("La différence de %d et %d est : %d\n", a, b, soust(a, b)); //soustraction de deux nombres
    printf("La multiplication de %d et %d est : %d\n", a, b, mult(a, b)); //multiplication de deux nombres
    printf("Le reste de la division de %d par %d est : %d\n", a, b, mod(a, b));//pour avoir l'affichage de notre modulo

    //Division
    printf("Première valeur : ");
    scanf("%d", &a);
    printf("Deuxième valeur : ");
    scanf("%d", &b);
    printf("La division de %d et %d est : %d\n", a, b, div(a, b)); //division de deux nombres

    //pour la valeur absolu
    printf("Entrez votre valeur de a : ");
    scanf("%d", &a);
    printf("La valeur absolu de %d est : %d\n", a, absolu(a));

    return 0;
}