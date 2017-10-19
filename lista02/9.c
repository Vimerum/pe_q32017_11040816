#include <stdio.h>

unsigned int calcular_potencia (unsigned int x, unsigned int y, unsigned int result) {
	if (y == 1) return result * x;
	
	calcular_potencia(x, y - 1, result * x);
}

int main () {
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%d\n", calcular_potencia(x, y, 1));

	return 0;
}
