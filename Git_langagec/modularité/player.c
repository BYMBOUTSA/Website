#include <stdio.h>
#include "player.h"

int TVA = 20; //variable global

void AfficherBonjour() {
    printf("Bonjour Charly !\n");
    printf("TVA = %d\n", TVA);
}
//-------------------------------------------
int carre(int n) {
    return n * n;
}
//-------------------------------------------
int maximum(int a, int b) {
    return(a > b) ? a : b;
}
//-------------------------------------------
int reset_niveau(void) {
    int niveau;
    niveau = 0;

    return niveau;
}

//-------------------------------------------