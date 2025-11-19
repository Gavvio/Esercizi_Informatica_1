#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int radNum(int n) {
	int mom = 0;
	while (1) {
		if (n > 0) {
			mom += n % 10;
			n /= 10;
		}
		else {
			if (mom < 10) {
				return mom;
			}
			else {
				n = mom;
				mom = 0;
			}
		}
	}
}

int main(int argc, char** argv) {
	if (argc > 2 || argc == 1) {
		return 1;
	}
	else {
		errno = 0;
		char* endptr;
		int num = strtol(argv[1], &endptr, 10);
		if (errno != 0 || *endptr != '\0' || num < 0) {
			return 1;
		}
		printf("%d", radNum(num));
	}
	return 0;
}