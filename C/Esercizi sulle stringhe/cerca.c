#include<stdint.h>
#include<stdlib.h>
#include<string.h>
int cerca_primo(const char* s, char c) {
	size_t res = -1;
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			res = i;
			break;
		}
	}
	return res;
}