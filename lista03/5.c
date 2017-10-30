#include <stdio.h>
#include <stdlib.h>

int contar_iguais (int current, int *v, int n) 
{
	int count = 1;

	for (int i = 0; i < n; i++) {
		if (current != i && current == v[i]) {
			v[i] = 0;
			count++;
		}
	}

	return count;
}

void contar_numeros (int *v, int n) 
{
	for (int i = 0; i < n; i++) {
		int count = 1, current = v[i];

		if (v[i] != 0) {
			v[i] = 0;
			
			count = contar_iguais(current, v, n);

			if (count > 1) {
				printf("%d-%d ", current, count);
			}
		}
	}
	printf("\n");
}

int main () {
	int n, *v;

	scanf("%d", &n);
	
	v = malloc(sizeof(int) * n);

	if (v == NULL) {
		printf("Nao ha memoria suficiente no computador\n");
		return -1;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	
	contar_numeros(v, n);

	free(v);

	return 0;
}
