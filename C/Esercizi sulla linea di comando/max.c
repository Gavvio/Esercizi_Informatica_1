#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main(int argc, char** argv) {
	if (argc == 1) {
		return 1;
	}
	else {
		int massimo = 0;
		char* endptr;
		errno = 0;
		for (int i = 1; i < argc; i++) {
			int mom = strtol(argv[i], &endptr,10);
			if (errno != 0 || *endptr != '\0') {
				return 1;
			}
			else {
				if (mom > massimo || massimo==0) {
					massimo = mom;
				}
			}
		}
		printf("%d", massimo);
	}
	return 0;
}