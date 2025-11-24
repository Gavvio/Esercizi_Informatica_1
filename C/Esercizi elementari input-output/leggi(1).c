#include<stdbool.h>
#include<stdio.h>
bool leggi_carattere_da_file(const char* filename, char* c) {
	if (filename == NULL || c == NULL) {
		return false;
	}
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return false;
	}
	int mom = fgetc(f);
	if (mom == EOF) {
		fclose(f);
		return false;
	}
	else {
		*c = mom;
	}
	fclose(f);
	return true;
}
/*
int main(void) {
	char c = 'o';
	char percorso[] = "C:/Users/steve/OneDrive/Desktop/input2.txt";
	bool risultato = leggi_carattere_da_file(percorso, &c);
	return 0;
}
*/
