#include <math.h>
extern int felice(unsigned int num) {
	int mom = 0;
	while (1) {
		if (num % 10 > 0 || num % 100 > 0 || num % 1000 > 0) {
			mom += pow(num % 10, 2);
			num /= 10;
		}
		else {
			if (mom == 4 || mom == 0) {
				return 0;
			}
			else if (mom == 1) {
				return 1;
			}
			num = mom;
			mom = 0;
		}
	}
}
/*
int main(void) {
	int res1 = felice(7);
	int res2 = felice(8);
	return 1;
}
*/