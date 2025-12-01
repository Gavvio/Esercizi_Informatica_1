#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* leggiinteri(const char* filename, size_t* size) {
	if (filename == NULL) {
		return NULL;
	}
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	size_t n = 0;
	size_t controllo1=fread(&n, sizeof(int), 1, f);
	if (controllo1 != 1) {
		if (feof(f)) {
			fclose(f);
			return NULL;
		}
		if (ferror(f)) {
			fclose(f);
			return NULL;
		}
	}
	int* array = malloc(n * sizeof(int));
	size_t controllo2 = fread(array, sizeof(int), n, f);
	if (controllo2 != n) {
		if (feof(f)) {
			fclose(f);
			return NULL;
		}
		if (ferror(f)) {
			fclose(f);
			return NULL;
		}
	}
	fclose(f);
	*size = n;
	return array;
}