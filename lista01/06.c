#include <stdio.h>

int main () {
	int x, total = 1;

	printf("Insira um valor: ");
	scanf("%d", &x);

	while (x != 0) {
		total *= x;
		x -= 1;
	}

	printf("Resultado: %d\n", total);

	return 0;
}
