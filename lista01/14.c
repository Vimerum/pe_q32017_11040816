#include <stdio.h>

int main () {
	int input;
	float soma=0, media;

	printf("Insira 10 valores:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		soma += input;
	}

	media = soma / 10;

	printf("soma = %.0f\nmedia = %.1f\n", soma, media);

	return 0;
}
