#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
	char nome[100];
	int matricula;
	float p1;
	float p2;
	float p3;
	float media;
} aluno;

int main ()
{
	FILE * fr, * fw;
	aluno temp;

	fr = fopen("lista_alunos.txt", "r");
	fw = fopen("media_alunos.txt", "w");

	for (int i = 0; i < 50; i++) {
		fscanf(fr, "%s %d %f %f %f", temp.nome, &temp.matricula, &temp.p1, &temp.p2, &temp.p3);
		temp.media = (temp.p1 + temp.p2 + temp.p3) / 3.0;
		fprintf(fw, "%s %04d %.2f %.2f %.2f %.2f\n", temp.nome, temp.matricula, temp.p1, temp.p2, temp.p3, temp.media);
	}

	fclose(fr);
	fclose(fw);

	return 0;
}
