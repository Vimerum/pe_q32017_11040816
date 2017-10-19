#include <stdio.h>

int fatorial (int n) {
	int result = 1;

	while (n > 0) {
		result *= n;
		n--;
	}

	return result;
}

float binomial (int n, int k) {
	return fatorial(n) / (fatorial(k) * fatorial(n-k));
}

int main () {
	int n, k;

	scanf("%d %d", &n, &k);
	printf("%.2f\n", binomial(n, k));

	return 0;
}
