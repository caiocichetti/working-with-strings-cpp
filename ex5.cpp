#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/* 5.) Fa�a um programa em "C"  que permita o usu�rio digitar uma frase qualquer 
e exiba quantas vogais existem na frase e tamb�m exiba as vogais e a posi��o
na(s) qual(quais) se encontram. */

main() {
	char st[50];
	int i, cont_vogal=0;
	
	printf("Digite a palavra ou a frase: ");
	gets(st);
	
	strlwr(st);
	
	for(i=0; i<strlen(st); i++) {
		if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u'  ) {
			cont_vogal = cont_vogal + 1;
			printf("st[%d] = %c\n",i,st[i]);
		} 
	}
	
	printf("Na frase tem %d vogais ", cont_vogal);
}

