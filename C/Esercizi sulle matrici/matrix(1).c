#include <stdio.h>
#include <stdlib.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
struct matrix* mat_copy(const struct matrix* mat) {
    if (mat == NULL) {
        return NULL;
    }
    struct matrix* nuova = malloc(1 * sizeof(struct matrix));
    size_t dimensione = (mat->rows*mat->cols);
    double* datanuova = malloc( dimensione * sizeof(double));
    for (size_t i = 0; i < dimensione; i++) {
        datanuova[i] = mat->data[i];
    }
    nuova->rows = mat->rows;
    nuova->cols = mat->cols;
    nuova->data = datanuova;
    return nuova;
}