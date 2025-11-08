#include<stdint.h>
#include<stdlib.h>
#include<string.h>
size_t conta_parole(const char* s) {
	size_t res = 0;
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i] != ' ') {
			if (i < strlen(s) - 1) {
				if (s[i + 1] == ' ') {
					res++;
				}
			}
			else {
				res++;
			}
		}
	}
	return res;
}
/*
int main(void) {
	char stringa[] = " Questa e' una stringa lunga 45 caratteri. ";
	size_t parole = conta_parole(stringa);
	return 1;
}
*/