#include <stdio.h>
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
struct matrix* matrix_quadruplica(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	struct matrix* nuova = malloc(1 * sizeof(struct matrix));
	size_t dimensione = (m->rows * 2 * m->cols * 2);
	double* datanuova = malloc(dimensione * sizeof(double));
	size_t pos = 0;
	size_t cols_adatt = m->cols - 1;
	size_t rows_adatt = m->rows - 1;
	for (size_t i = 0; i < m->rows * 2; i++) {
		for (size_t a = 0; a < m->cols * 2; a++) {
			if (a > cols_adatt && i > rows_adatt) {
				datanuova[pos] = m->data[a - m->cols + (i - m->rows) * m->cols];
			}
			else if (a > cols_adatt) {
				datanuova[pos] = m->data[a - m->cols + (i * m->cols)];
			}
			else if (i > rows_adatt) {
				datanuova[pos] = m->data[a + m->cols * (i - m->rows)];
			}
			else {
				datanuova[pos] = m->data[a + (i * m->cols)];
			}
			pos++;
		}
	}
	nuova->rows = m->rows * 2;
	nuova->cols = m->cols * 2;
	nuova->data = datanuova;
	return nuova;
}