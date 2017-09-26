#include <stdio.h>

char getHexa (int decimal) {
	if (decimal < 10) {
		return 48 + decimal;
	}
	
	switch (decimal) {
		case 10:
			return 'A';
		case 11:
			return 'B';
		case 12:
			return 'C';
		case 13:
			return 'D';
		case 14:
			return 'E';
		case 15: 
			return 'F';
	}
}

int main () {
	int valor, opcao, potencia = 1, i = 0;
	char resultado[50] = "";

	printf("Insira um valor: ");
	scanf("%d", &valor);
	printf(" 1 - Converter Decimal em Hexadecimal\n 2 - Converter Hexadecimal em Decimal\nInsira uma opcao: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			while (valor != 0) {
				resultado[i] = getHexa(valor % 16);
				i++;
				valor /= 16;
			}
			break;
		case 2:
			printf("%d", valor);
			return 0;
			break;
		default:
			printf("Opcao invalida\n");
			return 0;
	}

	printf("Resultado: ");
	for (int a = i - 1; a >= 0; a--) {
		printf("%c", resultado[a]);
	}
	printf("\n");

	return 0;
}
