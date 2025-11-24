#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
extern void mat_swaprows(struct matrix* mat, size_t r1, size_t r2);
