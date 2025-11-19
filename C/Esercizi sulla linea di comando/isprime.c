#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int isPrime(int numero) {
	if (numero == 0 || numero == 1) {
		return 0;
	}
	for (int i = 2; i < numero; i++) {
		if (numero % i == 0) {
			return 0;
		}
	}
	return 1;
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
		if (isPrime(num)) {
			printf("%s", "true");
		}
		else {
			printf("%s", "false");
		}
	}
	return 0;
}