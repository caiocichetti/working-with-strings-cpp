#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/* 2.)	Fa�a um programa em C que permita o usu�rio digitar uma frase qualquer e 
exiba a frase totalmente com letras mai�sculas (toupper) */

main() {
	
   char frase1[30];
   int tam1,i;
   
   printf("Frase 1: ");
   gets(frase1);
   
   tam1 = strlen(frase1);
   
   for (i=0;i<=tam1-1;i++) { // parte mais importante!!!
       frase1[i] = toupper(frase1[i]);
   } 
   
   printf("\nFrase Maiuscula: %s",frase1);
   
   // espera que o usu�rio digite uma tecla para finalizar 
   getch();
}
