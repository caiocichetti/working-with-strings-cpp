#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/* 3.)	Fa�a um programa em C que permita o usu�rio digitar uma frase qualquer e exiba quantos d�gitos, 
quantas letras mai�sculas, quantas letras min�sculas e quantos espa�os em branco existem na frase.*/

main() {
	char frase[60];
	int i, tam, qtdMaiuscula = 0, qtdMinusculas = 0, qtdEspBranco = 0;
	
	printf("Digite a frase: ");
	gets(frase);
	
	// pega o tamanho da frase
	tam = strlen(frase);
		
	for (i=0;i<=tam-1;i++) { // parte mais importante!!!

	   if(islower(frase[i])) {
       		qtdMinusculas += 1;
	   } 

	   if(isupper(frase[i])) {
       		qtdMaiuscula += 1;
	   } 
	   
	   if (isspace(frase[i])) {
       		qtdEspBranco += 1;
	   } 
  	} 
  	
	printf("\nA frase possui %d caracteres dentre eles %d sao MAIUSCULO, %d sao MINUSCULO e %d sao ESPACO EM BRANCO \n", tam, qtdMaiuscula, qtdMinusculas, qtdEspBranco);
}


