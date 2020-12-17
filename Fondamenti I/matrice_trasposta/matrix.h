#if!defined MATRIX_H
#define MATRIX_H
#include <stdio.h>

struct matrix
{
    size_t rows, cols;
    double *data;
};
extern void mat_constructor(struct matrix *this, size_t rows, size_t cols);
extern void mat_destructor(struct matrix *this);
extern struct matrix *new_matrix(size_t rows, size_t cols);
extern void mat_stampa(const struct matrix *m);
extern void delete_matrix(struct matrix *m);
extern struct matrix *mat_transpose(const struct matrix *m);

#endif //MATRIX_H
