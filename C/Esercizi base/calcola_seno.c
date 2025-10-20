#include<math.h>
double fattor(unsigned char val) {
	double ret = 1;
	while (val > 1) {
		ret *= val;
		val--;
	}
	return ret;
}
extern double calcola_seno(double x) {
	double ritorno = 0;
	double ritornocontrollo = 0;
	int i = 0;
	do {
		ritornocontrollo = ritorno;
		double nominatore = pow(-1, i);
		double denominatore = fattor(i * 2 + 1);
		double potenza = pow(x, i * 2 + 1);
		ritorno += (nominatore / denominatore) * potenza ;
		i++;
	} while (ritorno != ritornocontrollo);
	return ritorno;
}