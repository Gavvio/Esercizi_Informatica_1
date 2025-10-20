#include <math.h>
 double fatt(unsigned char val) {
	 double ret = 1;
	 	while (val > 1) {
				ret *= val;
				val--;
	}
		return ret;
}

 double esponenziale(double x) {
		double res = 0;
		double resmom = 0;
	 	int i = 0;
	 	do {
			resmom = res;
			double pot = pow(x, i);
			double fat = fatt(i);
			res += (pot/fat);
			i++;
	} while (resmom!=res);
	 	return res;
}
