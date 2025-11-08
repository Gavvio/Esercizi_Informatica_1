#include<stdint.h>
#include<stdlib.h>
#include<string.h>
char* trim(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	char primocar = ' ';
	size_t posizprimocar = 0;
	size_t posizultimocar = 0;
	for (size_t i = 0; i < strlen(s); i++) {
		if (primocar == ' ' && s[i] != ' ') {
			primocar = s[i];
			posizprimocar = i;
		}
		if (s[i] != ' ') {
			posizultimocar = i;
		}
	}
	size_t dim = 0;
	if (posizprimocar != 0 || posizultimocar != 0) {
		dim = posizultimocar - posizprimocar + 1;
	}
	char* res = calloc(dim + 1, sizeof(char));
	strncpy(res, strchr(s, primocar), dim);
	res[dim] = 0;
	return res;
}
/*
int main(void) {
	char stringa[] = " ciao ";
	char* stringares = trim(stringa);
	free(stringares);
	return 1;
}
*/