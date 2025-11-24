#include <stdio.h>
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
struct matrix* mat_rendiquadrata(const struct matrix* a) {
	if (a == NULL) {
		return NULL;
	}
	struct matrix* nuova = malloc(1 * sizeof(struct matrix));
	size_t nuovecols = 0;
	size_t nuoverows = 0;
	if (a->cols > a->rows) {
		nuovecols = a->cols;
		nuoverows = a->cols;
	}
	else if (a->rows > a->cols) {
		nuovecols = a->rows;
		nuoverows = a->rows;
	}
	else {
		nuovecols = a->cols;
		nuoverows = a->rows;
	}
	size_t dimensione = (nuovecols * nuoverows);
	double* datanuova = malloc(dimensione * sizeof(double));
	size_t indicevecchia = 0;
	size_t indicenuova = 0;
	for (size_t r = 0; r < nuoverows; r++) {
		for (size_t c = 0; c < nuovecols; c++) {
			if (c >= a->cols || r >= a->rows) {
				datanuova[indicenuova] = 0;
			}
			else {
				datanuova[indicenuova] = a->data[indicevecchia];
				indicevecchia++;
			}
			indicenuova++;
		}
	}
	nuova->rows = nuoverows;
	nuova->cols = nuovecols;
	nuova->data = datanuova;
	return nuova;
}