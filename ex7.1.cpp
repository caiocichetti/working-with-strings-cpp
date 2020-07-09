#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

/* 7.)	Faça um programa em "C" que permita o usuário digitar uma frase 
e exiba esta frase ao contrário.*/

// jeito NUTELA
main() {
	char st[30], st_r[30];
	int i, j;
	
	printf("Digite uma palavra ");
	gets(st);
	
	// faz um reverse na string
	strrev(st);
	
	puts(st);
	
	puts(st);
}
