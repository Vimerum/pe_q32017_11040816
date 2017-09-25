#include <stdio.h>

int main () {
	int valor, opcao, resultado = 0, potencia = 1;

	printf("Insira um valor: ");
	scanf("%d", &valor);
	printf(" 1 - Converter de Decimal para Binario\n 2 - Converter de Binario para Decimal\nInsira uma opcao: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			while (valor != 0) {
				resultado += ((valor % 2) * potencia);
				potencia *= 10;
				valor -= (valor % 2);
				valor /= 2;
			}
			break;
		case 2:
			while (valor != 0) {
				resultado += ((valor % 10) * potencia);
				potencia *= 2;
				valor /= 10;
			}
			break;
		default:
			printf("Opcao invalida\n");
			return 0;
	}

	printf("Resultado: %d\n", resultado);

	return 0;
}
