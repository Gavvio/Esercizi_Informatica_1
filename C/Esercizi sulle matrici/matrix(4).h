#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* matrix_quadruplica(const struct matrix* m);