extern int divisione(double a, double b, double *q) {
	if (b == 0) {
		return 0;
	}
	else {
		*q = a / b;
		return 1;
	}
}
/*
int main(void) {
	double a = 10;
	double b = 5;
	double c;
	int risultato = divisione(a, b, &c);
	return 1;
}
*/