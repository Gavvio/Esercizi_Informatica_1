#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* mat_transpose(const struct matrix* mat);