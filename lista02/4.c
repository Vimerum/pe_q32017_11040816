#include <stdio.h>
#include <math.h>

float soma (float x, float y) {
	return (x + y);
}

float subtracao (float x, float y) {
	return (x - y);
}

float multiplicacao (float x, float y) {
	return (x * y);
}

float divisao (float x, float y) {
	return (x / y);
}

float potenciacao (float x, float y) {
	return pow(x, y);
}

float calculadora (int n, float x, float y) {
	switch (n) {
		/* Soma */
		case 1:
			return soma(x, y);
		/* Subtração */
		case 2:
			return subtracao(x, y);
		/* Multiplicação */
		case 3:
			return multiplicacao(x, y);
		/* Divisão */
		case 4:
			return divisao (x, y);
		/* Potenciação */
		case 5:
			return potenciacao(x, y);
	}
}

int main () {
	int n;
	float x, y;

	scanf("%d %f %f", &n, &x, &y);

	printf("%.2f\n", calculadora(n, x, y));

	return 0;
	
}
