#include <stdio.h>

int main () {
	int valor, resultado = 0;

	printf("Insira um valor: ");
	scanf("%d", &valor);
	
	for (int i = 1; i <= valor; i++) {
		resultado += i;
	}

	printf("soma de 1 a %d = %d\n", valor, resultado);

	return 0;
}
