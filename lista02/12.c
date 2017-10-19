#include <stdio.h>

int fatorial (int n, int result) {
	if (n) {
		result *= n;
		n--;
		return fatorial(n, result);
	} else {
		return result;
	}
}

float binomial (int n, int k) {
	return fatorial(n, 1) / (fatorial(k, 1) * fatorial(n-k, 1));
}

int main () {
	int n, k;

	scanf("%d %d", &n, &k);
	printf("%.2f\n", binomial(n, k));

	return 0;
}
