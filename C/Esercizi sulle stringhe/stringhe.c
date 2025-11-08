#include<stdint.h>
#include<stdlib.h>
#include<string.h>
char* concatena(const char* prima, const char* seconda) {
	int dimensione = 1;
	char* ret;
	if (prima != NULL && seconda != NULL) {
		dimensione = strlen(prima) + strlen(seconda) + 1;
		ret = calloc((dimensione), sizeof(char));
		strcat(ret, prima);
		strcat(ret, seconda);
		return ret;
	}
	else if (prima != NULL) {
		dimensione = strlen(prima) + 1;
		ret = calloc((dimensione), sizeof(char));
		strcat(ret, prima);
		return ret;
	}
	else if (seconda != NULL) {
		dimensione = strlen(seconda) + 1;
		ret = calloc((dimensione), sizeof(char));
		strcat(ret, seconda);
		return ret;
	}
	ret = calloc(dimensione, sizeof(char));
	return ret;
}
/*
int main(void)
{
	char *s3 = NULL;
	char *s4 = NULL;
	
	char s1[] = "Questa e' la ";
	char s2[] = "stringa risultante.";
	
	char* s;
	s = concatena(s1, s2);
	free(s);
	return 0;
}
*/


