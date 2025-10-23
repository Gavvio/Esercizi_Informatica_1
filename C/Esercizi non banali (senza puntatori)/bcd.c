#include <math.h>
unsigned short bin2bcd(unsigned short val) {
	unsigned short mom = 0x0;
	if (val > 9999) {
		val = val % 10000;
	}
	int pot = 0;
	while (val > 0) {
		mom += val % 10 * pow(16, pot);
		val /= 10;
		pot++;
	}
	return mom;
}