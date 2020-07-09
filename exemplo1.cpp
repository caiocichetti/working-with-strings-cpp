#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Faça um programa em C que permita o usuário digitar uma 
frase qualquer e exiba esta frase novamente */

main()
{
     char frase[30];
     
     printf("Digite uma frase: ");
     
     gets(frase); // Lê um texto até que seja pressionado enter 
     
     puts(frase); // Imprime uma seqüência de caracteres 
}

