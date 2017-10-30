#include <stdio.h>

void vetor_soma (int *v1, int *v2, int *v3) 
{
	for (int i = 0; i < 5; i ++) {
		v3[i] = v1[i] + v2[i];
	}
}

int main () 
{
	int v1[5], v2[5], v3[5];

	/* Recebe v1 */
	for (int i = 0; i < 5; i++) {
		scanf("%d", &v1[i]);
	}

	/* Recebe v2 */
	for (int i = 0; i < 5; i++) {
		scanf("%d", &v2[i]);
	}

	vetor_soma(v1, v2, v3);

	/* Imprime o v3 */
	for (int i = 0; i < 5; i++) {
		printf("%d ", v3[i]);
	}
	printf("\n");

	return 0;
}
