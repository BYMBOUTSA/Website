/**************************************************************
 * 				TP9 SUR LES CHAÎNES DE CARACTÈRES			  *
 * 															  *
 * ***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*Implémentation des fonctions strlen, strchr, etc */

//fonction strlen
int Strlen(const char s[]) {
	int i = 0;

	while(s[i] != '\0')
		i++;
	return i;
}


//--------------------------------------------------------------------------
//fonction strchr
int Strchr(const char s[], const char c) {
	int i = 0;

	while(s[i] != '\0') {
		if(s[i] == c)
			return i;
		i++;
	}
	return -1;
}


//--------------------------------------------------------------------------
//fonction strcpy
void Strcpy(char s[], const char s1[]) {
	int i = 0;

	while(s1[i] != '\0') {
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0'; //alors on a le caractère de fin de chaîne 
}


//--------------------------------------------------------------------------
//fonction strcat
void Strcate(char c[], char c1[]) {
	int i = 0;

	while(c[i] != '\0') 
		i++;
	printf("%ld\n", sizeof c);
	printf("%ld\n", sizeof c1);

	int j = 0;

	while(c1[j] != '\0') {
		c[i] = c1[j];
		i++;
		j++;
	}
	c[i] = '\0';
	printf("%ld\n", sizeof c);
}




//--------------------------------------------------------------------------
//fonction strcmp
int Strcmp(char s1[], char s2[]) {
	int i = 0;

	while(s1[i] == s2[i]) {
		if(s1[i] != '\0')
			return 0;
		i++;
	}
	if(s1[i] > s2[i])
		return 1;
	return -1;

}



//--------------------------------------------------------------------------
//Porcédure trim
void trim(const char s1[], char s2[]) {
	int i = 0, j = 0, k = 0;

	while(isspace(s1[i]) != 0) i++;

	if(s1[i] != '\0') {
		j = i + 1;
	
		while(s1[j] != '\0') j++;

		while(isspace(s1[--j]));
		while(i <= j) s2[k++] = s1[i++];

	}
	s2[k] = '\0';
}

//--------------------------------------------------------------------------
int main(void) {
	char s1[] = "CharlyDarcy";
	const char b = 'c';
	const char s2[] = "Enfant de Dieu";
	char c[] = "Welcome";
	char c1[] = " Welharly";
	const char s[] = " \n bonne année 2021\t ";
	char s3[30];

	printf("%d\n", Strlen(s1)); // pour donner la nombre de caractère de la chaîne s1 sans le caractère de fin de chaîne ('\0')
	printf("%ld\n", sizeof(s1)); // pour donner le nombre de caractère de la chaîne s1 avec en plus le caractère de fin de chaîne
	//printf("%ld\n", strlen(s1)); // fonction issu de la librairie string.h
	printf("%d\n", Strchr(s1, b)); //pour donner la première occurence du caractère
	printf("%s\n", strchr(s1, b)); // pour avoir le caractère c ainsi que tous ce qui viennent après lui
	Strcpy(s1, s2);
	printf("La copie est : %s\n", s1, s2); // permet de copier la chaîne s2 dans celle en s1

	Strcate(c, c1);
	printf("La concaténation est : %s\n", c, c1);

	printf("%d\n", Strcmp(c, c1));

	trim(s, s3);
	printf("%s\n", s, s3);



	return 0;
}
