#include <stdio.h>
#include <string.h>

/* Faça um programa em C que permita o usuário digitar uma frase qualquer 
e exiba quantos caracteres existem na frase. */

main()
{
     char frase[30];
     int tam;
     
     printf("Digite uma frase: ");
     
     gets(frase);
     
     tam = strlen(frase);
     
     printf("Esta frase possui %d caracteres",tam);
}

