#include <stdio.h>
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
struct matrix* scambia_diagonali(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	else if (m->rows != m->cols) {
		return NULL;
	}
	struct matrix* nuova = malloc(1 * sizeof(struct matrix));
	size_t dimensione = (m->rows * m->cols);
	double* datanuova = malloc(dimensione * sizeof(double));
	size_t pos = 0;
	size_t cols_adatt = m->cols - 1;
	for (size_t i = 0; i < m->rows; i++) {
		for (size_t a = 0; a < m->cols; a++) {
			if (a != i && a+i == cols_adatt) {
					datanuova[pos] = m->data[i*m->cols+i];
			}
			else if (a == i) {
				datanuova[pos] = m->data[i*m->cols+(cols_adatt-i)];
			}
			else {
				datanuova[pos] = m->data[pos];
			}
			pos++;
		}
	}
	nuova->rows = m->rows;
	nuova->cols = m->cols;
	nuova->data = datanuova;
	return nuova;
}