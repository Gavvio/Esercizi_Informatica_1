#include<stdint.h>
#include<stdlib.h>
#include<string.h>
void encrypt(char* s, size_t n) {
	unsigned char a = 0xaa;
	for (size_t i = 0; i < n; i++) {
		s[i] = s[i] ^ a;
	}
}
/*
int main(void) {
	char stringa[] = "ciao";
	encrypt(stringa, 4);
	encrypt(stringa, 4);
	return 1;
}
*/