#include <stdio.h>

int main () {
	double temperatura, nova_temperatura;
	int opcao;

	/* opcao == 1: converter Celsius para Fahrenheit */
	/* opcao == 2: converter Fahrenheit para Celsius */

	printf("Insira a temperatura: ");
	scanf("%lf", &temperatura);

	printf("Opcao 1: Converter Celsius para Fahrenheit\nOpcao 2: Converter Fahrenheit para Celsius\nInsira uma opcao: ");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			nova_temperatura = ((temperatura * 1.8) + 32);
			printf("%.1lf Celsius sao %.1lf Fahrenheits\n", temperatura, nova_temperatura);
			break;
		case 2:
			nova_temperatura = ((temperatura - 32) / 1.8);
			printf("%.1lf Fahrenheits sao %.1lf Celsius\n", temperatura, nova_temperatura);
			break;
		default:
			printf("Opcao invalida");
	}

	return 0;
}
