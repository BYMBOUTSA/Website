#include <stdio.h>

int main(void) {

    int i = 0;

    /* while(i < 5) {
        printf("Charly, tu as vu ?\n");
        i++;
    } */

    /*
        diffférence entre la boucle while et celle do while:
        - while fait le test des le départ et si celui-ci est faux tu n'obtient rien.
        - do while s'éxécute au moins une fois et après tu es testé.
    */
    do {
        printf("Charly, tu as vu ?\n");
        i++;

    }
    while(i < 5);


    return 0;
}