#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

/* 8.)	Faça um programa em "C" que permita o usuário digitar uma frase e uma letra qualquer 
e verifique em que posição da frase esta letra se encontra, se existir, é claro. Se existir mais de uma, 
exiba todas as posições.*/

main() {
	char frase[50], letra;
	int i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	strupr(frase);
	
	printf("Digite a letra: ");
	letra = toupper(getche());
	
	printf("\n\n");
	
	for(i=0; i<strlen(frase); i++) {
		if(frase[i] == letra) {
			printf("frase[%d] = %c\n",i,frase[i]);
		} 
	}
}
