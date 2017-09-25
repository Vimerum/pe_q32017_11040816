#include <stdio.h>

int main () {
	double temperatura, nova_temperatura;
	int opcao;

	printf("Insira uma temperatura: ");
	scanf("%lf", &temperatura);
	printf(" 1 - Converter de Celsius para Kelvin\n 2 - Converter de Kelvin para Celsius\nInsira uma opcao: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			nova_temperatura = temperatura + 273.15;
			printf("%.2lf Celsius sao %.2lf Kelvins\n", temperatura, nova_temperatura);
			break;
		case 2:
			nova_temperatura = temperatura - 273.15;
			printf("%.2lf Kelvins sao %.2lf Celsius\n", temperatura, nova_temperatura);
			break;
		default:
			printf("Opcao invalida");
	}

	return 0;
}
