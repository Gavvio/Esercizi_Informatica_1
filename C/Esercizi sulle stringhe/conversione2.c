#include<stdio.h>
#include<stdlib.h>
char* converti(unsigned int n) {
	char* res = malloc(12 * sizeof(char));
	//anche questa opzione valida ma non vista a lezione e funziona con int ma non unsigned int se troppo grande
	//_itoa(n, res, 10);
	sprintf(res, "%u", n);
	return res;
}
/*
int main(void) {
	unsigned int n = 4294967295;
	char* stringarisultato = converti(n);
	free(stringarisultato);
	return 0;
}
*/