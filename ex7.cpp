#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

/* 7.)	Fa�a um programa em "C" que permita o usu�rio digitar uma frase 
e exiba esta frase ao contr�rio.*/

// jeito raspando o BIT
main() {
	char st[30], st_r[30];
	int i, j;
	
	printf("Digite uma palavra ");
	gets(st);
	
	// pega o ultimo valor da string
	j = strlen(st)-1;
	
	for(i=0; i<strlen(st); i++) {
		st_r[j] = st[i];
		j--;
	}
	
	puts(st);
	puts(st_r);
}
