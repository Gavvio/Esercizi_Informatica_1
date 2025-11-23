#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* mat_copy(const struct matrix* mat);