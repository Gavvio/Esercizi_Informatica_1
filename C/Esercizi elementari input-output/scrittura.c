#include <stdbool.h>
#include<stdbool.h>
#include<stdio.h>
bool scrivimaiuscolo(const char* filename) {
	if (filename == NULL) {
		return false;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return false;
	}
	int c;
	while ((c = fgetc(f)) != EOF) {
		if (c > 96 && c < 123) {
			c = c - 32;
		}
		fputc(c, stdout);
	}
	fclose(f);
	return true;
}