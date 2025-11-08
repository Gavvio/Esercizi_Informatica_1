#include<stdint.h>
#include<stdlib.h>
extern size_t lungh(const char* str) {
	int i = 0;
	while (str[i] != 0) {
		i++;
	}
	return i;
}
/*
int main(void)
{
	char s[] = "Ecco la stringa di prova";
	size_t len;
	len = lungh(s);
	return 0;
}
*/