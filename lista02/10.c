#include <stdio.h>

int fibMem[1000];

int fib (int n, int x) {
	fibMem[x] = fibMem[x-1] + fibMem[x-2];
	printf("%d %d %d\n", n, x, fibMem[x]); 

	if (n <= 2) return fibMem[n];
	if (x == n) return fibMem[n];

	return fib(n, x + 1);
}

int main () {
	int n;

	fibMem[0] = 0;
	fibMem[1] = 1;
	fibMem[2] = 1;

	scanf("%d", &n);
	printf("%d\n", fib(n, 3));

	return 0;
}
