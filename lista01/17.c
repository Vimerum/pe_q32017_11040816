#include <stdio.h>

int main () {
	int x, y, soma_quadrado = 0, quadrado_soma = 0, diferenca;

	printf("Insira o inicio do intervalo: ");
	scanf("%d", &x);
	printf("Insira o final do intervalo: ");
	scanf("%d", &y);
	
	for (int i = x; i <= y; i++) {
		soma_quadrado += (i * i);
		quadrado_soma += i;
	}
	quadrado_soma *= quadrado_soma;
	diferenca = quadrado_soma - soma_quadrado;

	printf("soma dos quadrados\t= %d\n", soma_quadrado);
	printf("quadrado da soma\t= %d\n", quadrado_soma);
	printf("diferenca\t\t= %d\n", diferenca);

	return 0;
}
