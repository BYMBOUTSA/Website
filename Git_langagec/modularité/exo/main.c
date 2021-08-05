/*
EXERCICE C #4
[Révision : jusqu'à la programmation modulaire]
> Ecrire un programme de calculatrice simple de deux nombres :
    - afficher un menu principal proposant les 4 types de calcul (+, -, * et /) ou de quitter.
    - une fois le calcul choisi, demander la saisie de 2 nombres et afficher le résultat.
    - rediriger sur le menu principal.

> Indications :
    - utiliser au maximum des fonctions (pour optimiser votre code et éviter les répétitions).
    - vérifier que la saisie au menu est correct, sinon redemander une saisie.
    - Vérifier que les nombres saisis sont compris entre -1000 et 1000.
    - compiler avec la commande -> gcc *.c -o prog (donnerra un exécutable prog ou prog.exe)
*/

#include <stdio.h>
#include "numbers.h"

void ask_number(void) {
    int choice = 0;

    do {
        show_menu(); //Appel de la fonction du menu principal
        printf("> "); //Pour demander à l'utilisateur de faire un choix
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                do_operation(choice); break;
            case 2:
                do_operation(choice); break;
            case 3:
                do_operation(choice); break;
            case 4:
                do_operation(choice); break;
            case 5:
                break;
            default:
                printf("Option incorrect !\n"); break;
        }

    }
    while(choice != 5);
}


int main(void) {

    ask_number();    


    return 0;
}