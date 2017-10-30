#include <stdio.h>

int contar_vogais(char *str) 
{
	int i = 0, result = 0;
	char vogais[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };

	while (str[i]) {
		for (int a = 0; a < 10; a++) {
			if (str[i] == vogais[a]) {
				result++;
				continue;
			}
		}
		i++;
	}

	return result;
}

int main () 
{
	char str[255];
	int n;

	fgets(str, 255, stdin);
	
	printf("%d\n", contar_vogais(str));

	return 0;
}
