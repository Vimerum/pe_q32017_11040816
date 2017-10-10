#include <stdio.h>
#include <math.h>

/*long double calcular_pi (int n, long double a, long double b, long double t, long double p) {
	long double a1;

	if (n) return ( pow((a + b), 2) / (4.0 * t) );

	a1 = (a + b) / 2.0;
	b = sqrt(a * b);
	t = (t - (p * pow((a - a1), 2)));
	p = (2.0 * p);
	a = a1;
	
	return calcular_pi(n - 1, a, b, t, p);
	
}*/

int main () {
	long double a = 1.0, b = (1.0 / (sqrt(2))), t = (1.0 / 4.0), p = 1.0, a1, pi;

	for (int i = 0; i < 10; i++) {
		a1 = (a + b) / 2.0;
		b = sqrt(a * b);
		t = (t - (p * pow((a - a1), 2)));
		p = (2.0 * p);
		a = a1;
	}

	pi = ( pow((a + b), 2) / (4.0 * t) );
	/*pi = calcular_pi(10, a, b, t, p);*/

	printf("%.20Lf\n", pi);

	return 0;
}
