#include <stdio.h>
#include <math.h>
// 0 == false;
// 1 == true;

void calcular (float a, float b, float raiz, float * x) {
	*x = (-b + raiz) / (2 * a);
}

void calcular_imaginario (float a, float b, float raiz, float * x, float * x_i) {
	*x = (-b) / (2 * a);
	*x_i = (raiz) / (2 * a);
}

int bhaskara (float a, float b, float c, float * x1, float * x2, float * x1_i, float * x2_i) {
	float delta = pow(b, 2) - 4 * a * c;
	
	if (delta < 0) {
		calcular_imaginario(a, b, -sqrt(-delta), x1, x1_i);
		calcular_imaginario(a, b, sqrt(-delta), x2, x2_i);
		return 1;
	} else if (delta == 0) {
		calcular(a, b, sqrt(delta), x1);
		*x2 = *x1;
		return 0;
	} else {
		calcular(a, b, -sqrt(delta), x1);
		calcular(a, b, sqrt(delta), x2);
		return 0;
	}
}

int main () {
	float a, b, c;
	int imaginario;
	float x1 = 0, x2 = 0;
	float x1_i = 0, x2_i = 0;
	char x1_sinal = '+', x2_sinal = '+';

	scanf("%f %f %f", &a, &b, &c);
	
	imaginario = bhaskara(a, b, c, &x1, &x2, &x1_i, &x2_i);

	if (imaginario) {
		if (x1_i < 0) { 
			x1_sinal = '-';
			x1_i *= -1;
		}

		if (x2_i < 0) {
			x2_sinal = '-';
			x2_i *= -1;
		}

		printf("%.2f %c %.2fi %.2f %c %.2fi\n", x1, x1_sinal, x1_i, x2, x2_sinal, x2_i);
	} else {
		printf("%.2f %.2f\n", x1, x2);
	}

	return 0;
}
