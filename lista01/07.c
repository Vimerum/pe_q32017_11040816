#include <stdio.h>

int main () {
	int x, y; 
	long int resultado = 1;

	printf("Insira um valor: ");
	scanf("%d", &x);
	printf("Insira outro valor: ");
	scanf("%d", &y);

	while (y != 0) {
		resultado *= x;
		y--;
	}

	printf("Resultado: %ld\n", resultado);

	return 0;
}
