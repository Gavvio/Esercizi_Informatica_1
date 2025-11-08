#include<stdint.h>
#include<stdlib.h>
#include<string.h>
extern size_t conta_spazi(const char* s) {
	size_t res = 0;
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			res++;
		}
	}
	return res;
}

/*
int main(void)
{
	char s[] = "Prova stringa in cui contare gli spazi";
	size_t len;
	len = conta_spazi(s);
	return 0;
}
*/
