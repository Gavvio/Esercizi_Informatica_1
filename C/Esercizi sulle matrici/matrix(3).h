#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* scambia_diagonali(const struct matrix* m);