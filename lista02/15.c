#include <stdlib.h>
#include <stdio.h>

void move (int n, char from, char to, char free) {
	if (n == 1) {
		printf("%c-%c", from, to);
		return;
	}

	move(n-1, from, free, to);
	printf(", %c-%c, ", from, to);
	move(n-1, free, to, from);
}

int main () {
	int n;

	scanf("%d", &n);

	move(n, 'A', 'C', 'B');
	printf("\n");

	return 0;
}
