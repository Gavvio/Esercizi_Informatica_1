#include <stdlib.h>
#include <stdio.h>
#include<string.h>
int main(int argc, char **argv) {
	if (argc > 2 || argc==1) {
		return 1;
	}
	else {
		char *stringamom = argv[1];
		char *stringainversamom=calloc(strlen(stringamom)+1,sizeof(char));
		int a = 0;
		for (int i = strlen(stringamom) - 1; i >= 0; i--) {
			stringainversamom[a] = stringamom[i];
			a++;
		}
		printf("%s", stringainversamom);
	}
	return 0;
}