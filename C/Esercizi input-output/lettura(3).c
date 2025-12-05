#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double* leggidouble(const char* filename, size_t* size) {
	if (filename == NULL) {
		return NULL;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	int numeripres = 0;
	while (1) {
		int c = fgetc(f);
		if (c == EOF) {
			break;
		}
		else {
			if (c == 46) {
				numeripres++;
			}
		}
	}
	rewind(f);
	if (numeripres != 0) {
		double* ritorno = malloc(numeripres * sizeof(double));
		for (int i = 0; i < numeripres; i++) {
			int controllo = fscanf(f, "%lf", ritorno+i);
			if (controllo != 1) {
				if (feof(f)) {
					fclose(f);
					return NULL;
				}
				if (ferror(f)) {
					fclose(f);
					return NULL;
				}
			}
		}
		fclose(f);
		*size = numeripres;
		return ritorno;
	}
	else {
		fclose(f);
		return NULL;
	}
}