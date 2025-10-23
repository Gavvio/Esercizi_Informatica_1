#include<stdbool.h>
extern bool crescente(unsigned int x) {
	unsigned int mom = x % 10;
	x /= 10;
	while (x > 0) {
		if (x % 10 != mom-1) {
			return 0;
		}
		else {
			mom = x % 10;
			x /= 10;
		}
	}
	return 1;
}
/*
int main(void) {
	bool res1 = crescente(123);
	bool res2 = crescente(5);
	bool res3 = crescente(124);
	return 1;
}
*/