#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

/* 8.)	Fa�a um programa em "C" que permita o usu�rio digitar uma frase e uma letra qualquer 
e verifique em que posi��o da frase esta letra se encontra, se existir, � claro. Se existir mais de uma, 
exiba todas as posi��es.*/

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
