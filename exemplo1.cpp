#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Fa�a um programa em C que permita o usu�rio digitar uma 
frase qualquer e exiba esta frase novamente */

main()
{
     char frase[30];
     
     printf("Digite uma frase: ");
     
     gets(frase); // L� um texto at� que seja pressionado enter 
     
     puts(frase); // Imprime uma seq��ncia de caracteres 
}

