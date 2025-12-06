#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
struct libro {
	char* titolo;
	uint16_t* anni_ristampe;
};
extern bool libro_scrivi(const struct libro* p, FILE* f) {
	if (p != NULL && f != NULL) {
		size_t titolodim = strlen(p->titolo)+1;
		size_t controllo = fwrite(p->titolo, sizeof(char), titolodim, f);
		if (controllo != titolodim) {
			return false;
		}
		else {
			size_t dimensionearray = 0;
			while (1) {
				if (p->anni_ristampe[dimensionearray] == 0) {
					dimensionearray++;
					break;
				}
				else {
					dimensionearray++;
				}
			}
			size_t controllo = fwrite(p->anni_ristampe, sizeof(uint16_t), dimensionearray, f);
			if (controllo !=dimensionearray) {
				return false;
			}
			else {
				return true;
			}
		}
	}
	else {
		return false;
	}
}