#include <stdio.h>

int main () {
	int valor;
	printf("Entre com um valor: ");
	scanf("%d", &valor);

	if ((valor % 2) == 0) {
		printf("Numero par\n");
	}
	else {
		printf("Numero impar\n");
	}

	return 0;
}
