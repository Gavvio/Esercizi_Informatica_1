#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* leggiinteri2(const char* filename, size_t* size) {
	if (filename == NULL) {
		return NULL;
	}
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	fseek(f, 0, SEEK_END);
	long dimensione = ftell(f);
	rewind(f);
	if (dimensione != 0) {
		size_t numeroelementi = dimensione / 4;
		int* ritorno = malloc(numeroelementi * sizeof(int));
		size_t controllo = fread(ritorno, sizeof(int), numeroelementi, f);
		if (controllo != numeroelementi) {
			if (feof(f)) {
				fclose(f);
				return NULL;
			}
			if (ferror(f)) {
				fclose(f);
				return NULL;
			}
		}
		else {
			fclose(f);
			*size = numeroelementi;
			return ritorno;
		}
	}
	else {
		fclose(f);
		return NULL;
	}
}