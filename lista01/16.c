#include <stdio.h>

int main () {
	int id, faltas, horas_extras;
	float salario_base, descontos, acrescimos, salario_total;

	printf("Insira o ID do cargo: ");
	scanf("%d", &id);
	printf("Insira o numero de faltas: ");
	scanf("%d", &faltas);
	printf("Insira o numero de horas extras: ");
	scanf("%d", &horas_extras);

	switch (id) {
		case 1:
			printf("cargo\t\t: Diretor\n");
			salario_base = 10000;
			break;
		case 2:
			printf("cargo\t\t: Gerente\n");
			salario_base = 8000;
			break;
		case 3:
			printf("cargo\t\t: Engenheiro\n");
			salario_base = 5000;
			break;
		case 4:
			printf("cargo\t\t: Tecnico\n");
			salario_base = 3000;
			break;
		case 5:
			printf("cargo\t\t: Operador\n");
			salario_base = 2000;
			break;
		default:
			printf("Cargo inexistente.\n");
			return 0;
	}
	
	descontos = (salario_base / 20) * faltas;
	if (horas_extras > 40)
		horas_extras = 40;
	acrescimos = ((salario_base / 160) * horas_extras) + (40 * horas_extras);
	salario_total = salario_base - descontos + acrescimos;

	printf("# de faltas\t: %d\n", faltas);
	printf("# horas-extras\t: %d\n", horas_extras);
	printf("descontos\t: %.2f\n", descontos);
	printf("acrescimos\t: %.2f\n", acrescimos);
	printf("salario\t\t: %.2f\n", salario_total);
}
