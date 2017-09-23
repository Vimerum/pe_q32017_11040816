#include <stdio.h>

int main () {
	int i, s0 = 0, s1 = 1;

	printf("Insira um numero: ");
	scanf("%d", &i);

	if (i >= 0)  {
		printf("%d", s0);
	}
	if (i >= 1) {
		printf(", %d", s1);
	}

	for (int a = 2; a <= i; a++) {
		int s2 = s0 + s1;
		printf(", %d", s2);
		s0 = s1;
		s1 = s2;
	}
	printf("\n");

	return 0;
}
