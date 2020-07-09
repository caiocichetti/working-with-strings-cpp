#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/*
DEFINI��O DE PALINDROMA
qualquer sequ�ncia de caracteres que seja a mesma se lida da esquerda para a direita ou da direita para a esquerda.
Por exemplo, a palavra �osso� � um pal�ndromo, pois � id�ntica n�o importa o sentido da leitura.
*/

main() {
	int i, valor = 0;
	char palavra[15], inversa[15];

	printf("Digite uma palavra: ");
	gets(palavra);

	//Converter a palavra digitada para min�sculas
	for(i = 0; palavra[i]; i++){
		palavra[i] = tolower(palavra[i]);
	}

	//Copiar a palavra digitada para que seja invertida
	strcpy(inversa, palavra);

	//Inverter a palavra copiada
	strrev(inversa);

	valor = strcmp(palavra, inversa);

	if (valor == 0) {
		printf("\nA palavra %s eh palindroma\n", palavra);
	} else {
		printf("\nA palavra %s nao eh palindroma\n", palavra);
	}
}
