#include <stdio.h>

int main () {
	int x, y, resultado;

	printf("Insira um valor: ");
	scanf("%d", &x);
	printf("Insira outro valor: ");
	scanf("%d", &y);

	resultado = x - y;

	printf("Resultado: %d\n", resultado);

	return 0;
}
