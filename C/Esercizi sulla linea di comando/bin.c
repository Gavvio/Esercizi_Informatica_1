#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <math.h>

char* binario(int n) {
	if (n == 0) {
		char*stringarapida=calloc(2,sizeof(char));
		stringarapida[0] = '0';
		stringarapida[1] = '\0';
		return stringarapida;
	}
	int dimensione = 1;
	int* array = malloc(dimensione * sizeof(int));
	int indice = 0;
	while (n > 1) {
		array[indice] = n % 2;
		indice++;
		n /= 2;
		dimensione++;
		array = realloc(array, dimensione*sizeof(int));
	}
	array[indice] = 1;
	char* stringa = calloc((dimensione + 1), sizeof(char));
	int mom = 0;
	for (int i = dimensione-1; i >= 0; i--) {
		//il +48 è per la conversione in ascii
		stringa[mom] = array[i]+48;
		mom++;
	}
	stringa[mom] = '\0';
	return stringa;
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
		char* stringa = binario(num);
		printf("%s", stringa);
		free(stringa);
	}
	return 0;
}