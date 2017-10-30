#include <stdio.h>

void inverter (char *str)
{
	int size = 0, hSize;

	while (str[size]) {
		size++;
	}

	size -= 1;
	hSize = size / 2;

	for (int i = 0; i <= hSize; i++) {
		char tmp = str[i];
		str[i] = str[size-i];
		str[size-i] = tmp;
	}
}

int main ()
{
	char str[255];

	fgets(str, 255, stdin);

	inverter(str);

	printf("%s\n", str);

	return 0;
}
