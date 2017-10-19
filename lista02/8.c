#include <stdio.h>

void calcular_acrescimos (float salario_base, int * horas_extras, float * acrescimos) {
	if (*horas_extras > 40)
		*horas_extras = 40;
	*acrescimos = ((salario_base / 160) * *horas_extras) + (40 * *horas_extras);
}

void calcular_descontos (float salario_base, int faltas, float * descontos) {
	*descontos = (salario_base / 20) * faltas;
}

void calcular_salario_base (int id, float * salario_base) {
	switch (id) {
		case 1:
			*salario_base = 10000;
			break;
		case 2:
			*salario_base = 8000;
			break;
		case 3:
			*salario_base = 5000;
			break;
		case 4:
			*salario_base = 3000;
			break;
		case 5:
			*salario_base = 2000;
			break;
	}
}

int main () {
	int id, faltas, horas_extras;
	float salario_base, descontos, acrescimos, salario_total;

	scanf("%d %d %d", &id, &faltas, &horas_extras);

	calcular_salario_base(id, &salario_base);
	
	calcular_descontos(salario_base, faltas, &descontos);

	calcular_acrescimos(salario_base, &horas_extras, &acrescimos);	

	salario_total = salario_base - descontos + acrescimos;

	printf("%.2f\n", salario_total);
}
