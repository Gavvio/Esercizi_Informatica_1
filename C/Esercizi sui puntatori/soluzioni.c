#include<math.h>
double discriminante(double a, double b, double c) {
	return pow(b, 2) - (4 * a * c);
}
extern int soluzioni(double a, double b, double c, double *x1, double *x2) {
	double disc = discriminante(a, b, c);
	if (disc < 0) {
		return 0;
	}
	else {
		*x1 = (-b + sqrt(disc)) / (a * 2);
		*x2 = (-b - sqrt(disc)) / (a * 2);
		if (disc == 0) {
			return 1;
		}
		else {
			return 2;
		}
	}
}
/*
int main(void) {
	double a, b;
	int sol = soluzioni(1, -3, 2, &a, &b);
	return 1;
}
*/