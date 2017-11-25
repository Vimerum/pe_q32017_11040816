#include <stdio.h>

/* Usando metodos tradicionais, ordena x e y */
void f1 (int x, int y, int *menor, int *maior)
{
	if (x > y) {
		*menor = y;
		*maior = x;
	}
	else {
		*menor = x;
		*maior = y;
	}
}

/* Usando bittricks, ordena x e y */
void f2 (int x, int y, int *menor, int *maior)
{
	int i = 0;
	int control = x ^ y;

	while (control) {
		i++;
		control = control >> 1;
	}

	if ((x >> (i-1)) & 1) {
		*menor = y;
		*maior = x;
	}
	else {
		*menor = x;
		*maior = y;
	}
}

int main ()
{
	int x, y, menor, maior;

	scanf("%d %d", &x, &y);

	f1(x, y, &menor, &maior);

	printf("%d %d\n", menor, maior);

	f2(x, y, &menor, &maior);

	printf("%d %d\n", menor, maior);

	return 0;
}
