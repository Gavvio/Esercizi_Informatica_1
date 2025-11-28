#include <stdbool.h>
#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void stampa_cornicetta(const char* s) {
	int dimensione = strlen(s) + 5;
	int dimensionetot = (dimensione * 3 + 1);
	char* str = malloc(dimensionetot * sizeof(char));
	int a = 0;
	for (int i = 0; i < dimensionetot-1; i++) {
		if (i == dimensione - 1 || i == dimensione * 2 - 1 || i == dimensione * 3 - 1) {
			str[i] = '\n';
		}
		else if (i == 0 || i == dimensionetot - 3) {
			str[i] = '/';
		}
		else if (i == dimensione || i == dimensione * 2 - 2) {
			str[i] = '|';
		}
		else if (i == dimensione - 2 || i == dimensione * 2) {
			str[i] = '\\';
		}
		else if (i == dimensione + 1 || i == dimensione * 2 - 3) {
			str[i] = ' ';
		}
		else if (i > dimensione + 1 && i < dimensione * 2 - 3) {
			str[i] = s[a];
			a++;
		}
		else {
			str[i] = '-';
		}
	}
	str[dimensionetot - 1] = '\0';
	fputs(str, stdout);
	free(str);
}
/*
int main(void) {
	char messaggio[] = "";
	stampa_cornicetta(messaggio);
	return 1;
}
*/