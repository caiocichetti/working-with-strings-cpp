#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/* 1.)	Faça um programa em "C" que permita o usuário digitar duas frases; 
exiba quantos caracteres existem em cada uma; concatene-as e exiba-a concatenada.*/

main() {
	char frase1[30], frase2[30], frase3[60];
	int tam1, tam2;
	
	printf("Frase 1: ");
	gets(frase1);
	
	printf("Frase 2: ");
	gets(frase2);
	
	// pega o tamanho da frase
	tam1 = strlen(frase1);
	
	// pega o tamanho da frase
	tam2 = strlen(frase2);
	
	strcpy(frase3, frase1); // copia frase1 para frase3
	
	strcat(frase3," "); // concatena um espaço em branco 
	
	strcat(frase3, frase2); // concatena a frase2 em frase3.   
	
	printf("\nA frase 1 possui %d caracteres e a frase 2 possui %d caracteres\n",tam1,tam2);
   	
	printf("Frase concatenada: %s",frase3);
}
