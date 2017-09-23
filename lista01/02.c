#include <stdio.h>

int main () {
	int a, b, resultado;

	printf("Insira um valor: ");
	scanf("%d", &a);
	printf("Insira outro valor: ");
	scanf("%d", &b);

	resultado = a + b;

	printf("Resultado: %d\n", resultado);

	return 0;
}
