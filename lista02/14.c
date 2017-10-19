#include <stdio.h>

int inverter (int m, int a) {
	if (a == 0) return m;

	return inverter(((m * 10) + (a % 10)), (a / 10));
}

int palindromo (int n) {
	int a = n;

	return (inverter(0, a) == n);
}

int main () {
	int n;

	scanf("%d", &n);

	if (palindromo(n))
		printf("sim\n");
	else
		printf("nao\n");

	return 0;
}
