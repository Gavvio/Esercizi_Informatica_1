#include <stdio.h>
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
void mat_swaprows(struct matrix* mat, size_t r1, size_t r2) {
	size_t dimensione = (mat->rows * mat->cols);
	double* datanuova = malloc(dimensione * sizeof(double));
	size_t pos = 0;
	for (size_t r = 0; r < mat->rows; r++) {
		for (size_t c = 0; c < mat->cols; c++) {
			if (r == r1) {
				datanuova[pos] = mat->data[c+r2*mat->cols];
			}
			else if (r == r2) {
				datanuova[pos] = mat->data[c + r1 * mat->cols];
			}
			else {
				datanuova[pos] = mat->data[pos];
			}
				pos++;
		}
	}
	mat->data = datanuova;
	free(datanuova);
}