#include<stdbool.h>
#include<stdio.h>
bool scrivi_stringa_su_file(const char* filename, const char* str) {
	if (filename == NULL || str == NULL) {
		return false;
	}
	FILE* f = fopen(filename, "w");
	if (f == NULL) {
		return false;
	}
	fputs(str, f);
	fclose(f);
	return true;
}
/*
int main(void) {
	char percorso[] = "C:/Users/steve/OneDrive/Desktop/FileDaUsare.txt";
	bool risultato = scrivi_stringa_su_file(percorso, "si godee");
	return 0;
}
*/
