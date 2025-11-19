#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<math.h>
#include <errno.h>
int main(int argc, char** argv) {
	if (argc |= 4) {
		return 1;
	}
	else {
		double area = 0;
		double a,b,c;
		char* endptr;
		errno = 0;
		a = strtod(argv[1], &endptr);
		if (errno != 0 || *endptr != '\0') {
			return 1;
		}
		b = strtod(argv[2], &endptr);
		if (errno != 0 || *endptr != '\0') {
			return 1;
		}
		c = strtod(argv[3], &endptr);
		if (errno != 0 || *endptr != '\0') {
			return 1;
		}
		if (a <= 0 || b <= 0 || c <= 0) {
			return 1;
		}
		area = sqrt(((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c))) / 4;
		printf("%f", area);
	}
	return 0;
}