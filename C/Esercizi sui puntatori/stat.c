#include<stdint.h>
#include<stdlib.h>
double media(double* x, unsigned int n) {
	if (x == NULL || n == 0) {
		return 0;
	}
	else {
		double mom = 0;
		for (unsigned int i = 0; i < n; i++) {
			mom += x[i];
	}
		return mom/n;
	}
}