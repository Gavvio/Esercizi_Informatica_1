#include <stdio.h>
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* mat_transpose(const struct matrix* mat) {
	if (mat == NULL) {
		return NULL;
	}
	struct matrix* nuova = malloc(1 * sizeof(struct matrix));
	size_t dimensione = (mat->rows * mat->cols);
	double* datanuova = malloc(dimensione * sizeof(double));
	size_t pos = 0;
	for (size_t i = 0; i < mat->cols; i++) {
		for (size_t a = 0; a < mat->rows; a++) {
			datanuova[pos] = mat->data[i+a*mat->cols];
			pos++;
		}
	}
	nuova->rows = mat->cols;
	nuova->cols = mat->rows;
	nuova->data = datanuova;
	return nuova;
}