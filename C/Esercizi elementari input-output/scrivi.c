#include<stdbool.h>
#include<stdio.h>
bool scrivi_carattere_su_file(const char* filename, char c) {
	if (filename == NULL) {
		return false;
	}
	FILE* f = fopen(filename, "w");
	if (f == NULL) {
		return false;
	}
	fputc(c, f);
	fclose(f);
	return true;
}
/*
int main(void) {
	char percorso[] = "C:/Users/steve/OneDrive/Desktop/FileDaUsare.txt";
	bool risultato = scrivi_carattere_su_file(percorso, 's');
	return 0;
}
*/