#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
bool scrivi_intero(const char* filename, int i) {
	if (filename == NULL) {
		return false;
	}
	FILE* f = fopen(filename, "w");
	if (f == NULL) {
		return false;
	}
	fprintf(f, "%d", i);
	fclose(f);
	return true;
}
/*
int main(void) {
	char percorso[] = "C:/Users/steve/OneDrive/Desktop/FileDaUsare.txt";
	bool risultato = scrivi_intero(percorso, 150);
	return 0;
}
*/