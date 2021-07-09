#include <stdio.h>

int main(void) {
   int i = 0;

   /* while(i < 10) {
       printf("i vaut %d\n", i);
       i++;
   } */
   

   do {
       printf("i vaut %d\n", i);
       i++;
   }
   while(i < 10);

   printf("Boucle terminée !\n");

    return 0;
}