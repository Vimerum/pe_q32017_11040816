#include <stdio.h>

int main () {
	float largura, comprimento, altura, volume;	

	scanf("%f %f %f", &largura, &comprimento, &altura);

	volume = largura * comprimento * altura;

	printf("%.2f\n", volume);

	return 0;
}
