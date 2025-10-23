#include<stdint.h>
#include<stdlib.h>
extern uint32_t* somme_2a2(uint32_t* vett, size_t size) {
    if (vett != NULL) {
        uint32_t* mom = malloc((size / 2) * sizeof(uint32_t));
        uint32_t second_i = 0;
        for (uint32_t i = 0; i < size / 2; i++) {
            mom[i] = vett[second_i] + vett[second_i + 1];
            second_i += 2;
        }
        return mom;
    }
    else {
        return NULL;
    }
}
/*
int main(void)
{
    size_t n = 6;
    uint32_t* v = malloc(n * sizeof(uint32_t));
    v[0] = 3; v[1] = 87; v[2] = 5; v[3] = 7; v[4] = 12; v[5] = 9;
    uint32_t* somme = somme_2a2(v, n);
    free(v);
    free(somme);
    return 0;
}
*/