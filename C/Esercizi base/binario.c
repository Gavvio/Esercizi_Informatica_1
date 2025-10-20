#include <math.h>
unsigned char bit_n(unsigned int val, unsigned char n) {
	val >>= n;
	return val & 1;
}

