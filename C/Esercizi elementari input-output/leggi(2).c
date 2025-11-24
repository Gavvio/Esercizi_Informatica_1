#include<stdbool.h>
#include<stdio.h>
bool leggi_stringa_da_file(const char* filename, char* s, size_t max_size){
	if (filename == NULL || s == NULL) {
		return false;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return false;
	}
	if (fgets(s, max_size, f) == NULL) {
		fclose(f);
		return false;
	}
	fclose(f);
	return true;
}
/*
int main(void) {
	char s[10] = "";
	char percorso[] = "C:/Users/steve/OneDrive/Desktop/FileDaUsare.txt";
	bool risultato = leggi_stringa_da_file(percorso, s,10);
	return 0;
}
*/
