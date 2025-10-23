#include<stdint.h>
extern void iota(uint32_t* x, size_t n) {
	if (x != NULL) {
		for (uint32_t i = 0; i < n; i++) {
			x[i] = i;
		}
	}
}
/*
int main(void) {
	uint32_t a[3] = { 12,15,20 };
	iota(a, 3);
	return 1;
}
*/