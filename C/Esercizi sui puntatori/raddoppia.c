#include<stdint.h>
extern void raddoppia(uint32_t* x, size_t n) {
	if (x != NULL) {
		for (size_t i = 0; i < n; i++) {
			x[i] = x[i] * 2;
		}
	}
}
/*
int main(void) {
	uint32_t a[3] = { 12,15,20 };
	raddoppia(a, 3);
	return 1;
}
*/