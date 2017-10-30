#include <stdio.h>
#include <stdlib.h>

double mediana (int *v, int n) 
{
	int half = --n / 2;
	if ((n % 2) == 0) {
		return ((v[half] + v[half + 1]) / 2);
	} else {
		return v[half+1];
	}
}

int cmpfune (const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int main ()
{
	int n;
	int *v;

	scanf("%d", &n);

	v = malloc(sizeof(int) * n);

	if (v == NULL) return -1;

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	qsort(v, n, sizeof(int), cmpfune);

	printf("%.2f\n", mediana(v, n));

	return 0;
}
