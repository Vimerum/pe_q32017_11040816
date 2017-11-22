#include <stdio.h>

typedef struct tempo {
	char signal;
	int minutos;
	int segundos;
	int decimos;
} tempo;

int tempo_to_decimals (tempo t) 
{
	return (t.decimos + (t.segundos * 100) + (t.minutos * 6000));
}

tempo decimals_to_tempo (int decimals)
{
	tempo t;
	t.decimos = decimals % 100;
	decimals /= 100;
	t.segundos = decimals % 60;
	decimals /= 60;
	t.minutos = decimals;

	return t;
}

tempo calc_diferenca (tempo t1, tempo t2) 
{
	tempo t3;
	int t1_decimals = tempo_to_decimals (t1);
	int t2_decimals = tempo_to_decimals (t2);

	if (t2_decimals > t1_decimals) {
		t3 = decimals_to_tempo(t2_decimals - t1_decimals);
		t3.signal = '-';
	}
	else {
		t3 = decimals_to_tempo(t1_decimals - t2_decimals);
		t3.signal = '+';
	}

	return t3;
}

int main () {
	tempo t1, t2, t3;
	t1.signal = '+';
	t2.signal = '+';

	scanf("%dm %ds %d", &t1.minutos, &t1.segundos, &t1.decimos);
	scanf("%dm %ds %d", &t2.minutos, &t2.segundos, &t2.decimos);

	t3 = calc_diferenca(t1, t2);

	if (t3.signal == '-')
		printf("%c%dm %ds %d\n", t3.signal, t3.minutos, t3.segundos, t3.decimos);
	else
		printf("%dm %ds %d\n", t3.minutos, t3.segundos, t3.decimos);

	return 0;
}
