#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <math.h>
int maxPot10(int num) {
	int mom = 0;
	while (num > 9) {
		mom++;
		num /= 10;
	}
	return mom;
}

char* hailstone(int n) {
	int size = 1;
	char* stringa = calloc(size, sizeof(char));
	int indice = 0;
	while (1) {
		int maxpot = maxPot10(n);
		if (n == 1) {
			size += maxpot + 1;
		}
		else {
			size += maxpot + 3;
		}
		
		stringa = realloc(stringa, size * sizeof(char));
		for (int i = maxpot; i >= 0; i--) {
			int mom = n / (pow(10, i));
			//il + 48 è per renderlo numero in ascii per la stringa
			char carattere = (mom % 10) + 48;
			stringa[indice] = carattere;
			indice++;
		}
		if (n == 1) {
			stringa[indice] = '\0';
			break;
		}
		stringa[indice] = ',';
		stringa[indice + 1] = ' ';
		indice += 2;
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = (3 * n) + 1;
		}
	}
	return stringa;
}

int main(int argc, char** argv) {
	if (argc == 1 || argc > 2) {
		return -1;
	}
	else {
		char* endptr;
		int num = strtol(argv[1], &endptr, 10);
		if (errno != 0 || *endptr != '\0' || num <= 0) {
			return 0;
		}
		char* hailst = hailstone(num);
		int sizehail = 1;
		printf("%s", hailst);
		for (size_t i = 0; i < strlen(hailst); i++) {
			if (hailst[i] == ',') {
				sizehail++;
			}
		}
		free(hailst);
		return sizehail;
	}
}