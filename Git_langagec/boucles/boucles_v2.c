#include <stdio.h>

int main(void) {
   int i = 0;

   /* while(i < 10) {
       printf("i vaut %d\n", i);
       i++;
   } */


   /* do {
       printf("i vaut %d\n", i);
       i++;
   }
   while(i < 10); */


   for(i = 0; i < 10; i++) 
        printf("i vaut %d\n", i);

   printf("Boucle terminée !\n");

    return 0;
}