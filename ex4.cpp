#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/* 4.) Fa�a um programa em "C" que permita o usu�rio digitar uma frase qualquer 
e exiba esta frase inteira em letras mai�sculas e min�sculas. */

main() {
	char frase[60], maiuscula[60], minuscula[60];
	int i, tam;
	
	printf("Digite a frase: ");
	gets(frase);
	
	tam = strlen(frase);
		
	for (i=0;i<=tam-1;i++) { 
		
		maiuscula[i] = toupper(frase[i]);
		minuscula[i] = tolower(frase[i]);
  	} 
  	
	printf("Maiuscula: %s \nMinuscula: %s", maiuscula, minuscula);
}

