#include<stdbool.h>
extern bool retta_per_due_punti(double x1, double y1, double x2, double y2, double *m, double *q) {
	if (x1 == x2) {
		return false;
	}
	else {
		*m = (y2 - y1) / (x2 - x1);
		*q = y1 - (*m * x1);
		return true;
	}
}
/*
int main(void) {
	double coef, ordin;
	bool risultato = retta_per_due_punti(2, -3, 3, -1, &coef, &ordin);
	return 1;
}
*/