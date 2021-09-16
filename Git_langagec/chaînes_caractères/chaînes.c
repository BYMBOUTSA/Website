#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int len(const char s[]) {
    int i = 0;

    while(s[i] != '\0') {
        i++;
    }
    return i;

}


/* int rlen(char *chain){
    int i=0;
    while(*(chain+i)!='\0'){
        i++;
    }
    return i;
} */

int chr(const char s[], const char c) {
    int i = 0;

    while(s[i] != '\0') {
        if(s[i] == c)
            return i;
        i++; //sinon on incrémente i
    }
    return -1;
}

int main(void) {
    char s1[]="demiacin";
    char a = 'i';
    //printf("%d",sizeof(s1)); //la différence entre sizeof et strlen est que sizeof prend en compte tous les caractères ainsi que celui de la fin de la chaîne '\0'
    printf("%s\n",strchr(s1,a)); //permet d'afficher tous les différents caractère depuis celui de la première occurence de notre caractère
    printf("%d\n", chr(s1,a)); //permet d'afficher la première occurence de notre caractère dans la chaîne s
    printf("%d\n", len(s1)); //permet d'afficher le nombre de caractère de notre chaîne s

    return 0;
}