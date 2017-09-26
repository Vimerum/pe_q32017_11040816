#include <stdio.h>

int main () {
	int valor;

	printf("Insira um valor maior que 100: ");
	scanf("%d", &valor);

	printf("100");
	for (int i = 101; i <= valor; i++) {
		if ((i % 2) == 0) 
			printf(", %d", i);
	}
	printf("\n");

	return 0;
}
