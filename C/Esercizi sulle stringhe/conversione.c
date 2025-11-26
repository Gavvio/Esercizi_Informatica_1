#include<stdint.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int maxPot10(unsigned int num) {
	int mom = 0;
	while (num > 9) {
		mom++;
		num /= 10;
	}
	return mom;
}
char* converti(unsigned int n) {
	int maxpot = maxPot10(n);
	char* ris = malloc((2 + maxpot) * sizeof(char));
	int indice = 0;
	for (int i = maxpot; i >= 0; i--) {
		unsigned int mom = n / (pow(10, i));
		//il + 48 è per renderlo numero in ascii per la stringa
		char carattere = (mom % 10) + 48;
		ris[indice] = carattere;
		indice++;
	}
	ris[indice] = '\0';
	return ris;
}
/*
int main(void) {
	unsigned int n = 4294967295;
	char* stringarisultato = converti(n);
	free(stringarisultato);
	return 0;
}
*/
