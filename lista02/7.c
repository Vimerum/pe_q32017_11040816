#include <stdio.h>

float celsiusFahrenheit (int opcao, float valor, char * temp) {
	float resultado = valor;

	switch (opcao) {
		case 12: // Celsius to Fahrenheit
			*temp = 'F';
			resultado = ((valor / 5) * 9) + 32;
			break;
		case 21: // Fahrenheit to Celsius
			*temp = 'C';
			resultado = ((valor - 32) / 9) * 5;
			break;
	}

	return resultado;
}

float celsiusKelvin (int opcao, float valor, char * temp) {
	float resultado = valor;

	switch (opcao) {
		case 13: // Celsius to Kelvin
			*temp = 'K';
			resultado = valor + 273.15;
			break;
		case 31: // Kelvin to Celsius
			*temp = 'C';
			resultado = valor - 273.15;
			break;
	}

	return resultado;
}

float fahrenheitKelvin (int opcao, float valor, char * temp) {
	float resultado = valor;

	switch (opcao) {
		case 23: // Fahrenheit to Kelvin
			*temp = 'K';
			resultado = (((valor - 32) / 9) * 5) + 273.15;
			break;
		case 32: // Kelvin to Fahrenheit
			*temp = 'F';
			resultado = (((valor - 273.15) / 5) * 9) + 32;
			break;
	}

	return resultado;
}

float temperatura (int opcao, float valor, char * temp) {
	float resultado = valor;

	switch (opcao) {
		case 12: // * Celsius to Fahrenheit
		case 21: // * Fahrenheit to Celsius
			resultado = celsiusFahrenheit(opcao, valor, temp);
			break;
		case 13: // Celsius to Kelvin
		case 31: // Kelvin to Celsius
			resultado = celsiusKelvin(opcao, valor, temp);
			break;
		case 23: // Fahrenheit to Kelvin
		case 32: // Kelvin to Fahrenheit
			resultado = fahrenheitKelvin(opcao, valor, temp);
			break;
	}

	return resultado;
}

int toBinario (int valor) {
	int resultado = 0, potencia = 1;

	while (valor != 0) {
		resultado += ((valor % 2) * potencia);
		potencia *= 10;
		valor -= (valor % 2);
		valor /= 2;
	}

	return resultado;
}

int toDecimal (int valor) {
	int resultado = 0, potencia = 1;

	while (valor != 0) {
		resultado += ((valor % 10) * potencia);
		potencia *= 2;
		valor /= 10;
	}

	return resultado;
}

int base_numerica (int opcao, int valor) {
	int resultado = 0;

	switch (opcao) {
		case 12: //Converter de Decimal para Binario
			resultado = toBinario(valor);
			break;
		case 21: //Converter de Binario para Decimal
			resultado = toDecimal(valor);
			break;
		default:
			printf("Opcao invalida\n");
	}

	return resultado;
}

int calcular (int tipo, int opcao, float valor, int * r_i, float * r_f, char * temp) {
	int resultado = 0;

	switch (tipo) {
		case 1: //Converter temperaturas
			*r_f = temperatura(opcao, valor, temp);
			resultado = 0;
			break;
		case 2:	//Converter bases numericas
			*r_i = base_numerica(opcao, (int)valor);
			resultado = 1;
			break;
	}

	return resultado;
}

int main () {
	int tipo, unidade_entrada, unidade_saida, opcao;
	float valor;
	int resultado_int;
	float resultado_float;
	char temperatura = 'x';

	scanf("%d %d %d %f", &tipo, &unidade_entrada, &unidade_saida, &valor);

	opcao = (unidade_entrada * 10) + unidade_saida;

	if (calcular(tipo, opcao, valor, &resultado_int, &resultado_float, &temperatura)) {
		printf("%d\n", resultado_int);
	} else {
		printf("%.2f %c\n", resultado_float, temperatura);
	}

	return 0;
}
