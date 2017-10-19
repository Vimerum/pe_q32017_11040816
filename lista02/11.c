#include <stdio.h>

int toBinario (int valor, int potencia, int resultado) {
	if (valor == 0) return resultado;

	resultado += ((valor % 2) * potencia);
	potencia *= 10;
	valor -= (valor % 2);
	valor /= 2;

	return toBinario(valor, potencia, resultado);
}

int toDecimal (int valor, int potencia, int resultado) {
	if (valor == 0) return resultado;

	resultado += ((valor % 10) * potencia);
	potencia *= 2;
	valor /= 10;
	
	return toDecimal(valor, potencia, resultado);
}

int main () {
	int valor, opcao, resultado = 0, potencia = 1;

	scanf("%d %d", &valor, &opcao);

	switch (opcao) {
		case 1: // Converter de Decimal para Binario
			resultado = toBinario(valor, 1, 0);
			break;
		case 2: // Converter de Binario para Decimal
			resultado = toDecimal(valor, 1, 0);
			break;
		default:
			return 0;
	}

	printf("%d\n", resultado);

	return 0;
}
