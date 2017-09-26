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

int getDecimal (char hexa) {
	switch (hexa) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		case 'A': return 10;
		case 'B': return 11;
		case 'C': return 12;
		case 'D': return 13;
		case 'E': return 14;
		case 'F': return 15;
	}
}

char toUpperCase (char input) {
	switch (input) {
		case 'a': 	
			return 'A';
		case 'b':
			return 'B';
		case 'c':
			return 'C';
		case 'd':
			return 'D';
		case 'f':
			return 'F';
		default:
			return input;
	}
}

int main () {
	int valor, opcao, potencia = 1, resultado_decimal = 0, i = 0;
	char resultado_hexa[50] = "";
	char input[50] = "@", current;

	printf("Insira um valor: ");
	scanf("%s", input);
	printf(" 1 - Converter Decimal em Hexadecimal\n 2 - Converter Hexadecimal em Decimal\nInsira uma opcao: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			sscanf(input, "%d", &valor);
			while (valor != 0) {
				resultado_hexa[i] = getHexa(valor % 16);
				i++;
				valor /= 16;
			}

			printf("Resultado: ");
			for (int a = i - 1; a >= 0; a--) {
				printf("%c", resultado_hexa[a]);
			}
			printf("\n");

			break;
		case 2:
			current = input[0];
			while (current != 0) {	
				i++;
				current = input[i];
			}
	
			for (int a = i - 1; a >= 0; a--) {
				resultado_decimal += (getDecimal(toUpperCase(input[a])) * potencia);
				potencia *= 16;
			}
			printf("Resultado: %d\n", resultado_decimal);
			break;
		default:
			printf("Opcao invalida\n");
			return 0;
	}

	return 0;
}
