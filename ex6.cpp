#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

/* 6.)	Fa�a um programa em "C" que permita o usu�rio digitar duas frases quaisquer 
e depois junte-as, exibindo-a uma vez toda mai�scula e outra vez toda min�scula.*/

main() {
	char st[50], st1[50], st2[100];
	
	printf("Digite o nome ");
	gets(st);
	
	printf("Digite o sobrenome ");
	gets(st1);
	
	strcpy(st2, st);
	
	strcat(st2, "");
	
	strcat(st2, st1);
	
	puts(st2);	
}
