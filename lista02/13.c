#include <stdio.h>

int mdc (int n, int m) {
	if (m == 0) return n;

	return mdc(m, (n % m));
}

int main () {
	int n, m;

	scanf("%d %d", &n, &m);

	printf("%d\n", mdc(n, m));

	return 0;
}
