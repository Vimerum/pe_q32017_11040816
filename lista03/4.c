#include <stdio.h>
#include <stdlib.h>

void transposta (int **matriz)
{
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			int tmp = matriz[i][j];
			matriz[i][j] = matriz[j][i];
			matriz[j][i] = tmp;
		}
	}
}

int main ()
{
	int **matriz;
	
	/* Inicia a matriz 3x3 e confere se ela foi criada */
	matriz = malloc(sizeof(int *) * 3);

	if (matriz == NULL) {
		printf("Nao ha memoria suficiente no computador\n");
		return -1;
	}

	for (int i = 0; i < 3; i++) {
		matriz[i] = malloc(sizeof(int) * 3);
		
		if (matriz[i] == NULL) {
			printf("Nao ha memoria suficiente no computador\n");
			return -1;
		}
	}

	/* Recebe os valores da matriz */
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	/* Calcula a transposta da matriz */
	transposta(matriz);

	/* Imprime a matriz transposta */
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
