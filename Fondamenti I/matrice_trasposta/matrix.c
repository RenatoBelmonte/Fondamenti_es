#include "matrix.h"

extern void mat_constructor(struct matrix *this, size_t rows, size_t cols)
{
    this->rows = rows;
    this->cols = cols;
    this->data = malloc(rows * cols * sizeof(double));
}

extern void mat_destructor(struct matrix *this)
{
    free(this->data);
}

struct matrix *new_matrix(size_t rows, size_t cols)
{
    struct matrix *m = malloc(sizeof(struct matrix));
    mat_constructor(m,rows,cols);
    return m;

}

void mat_stampa(const struct matrix *m)
{
    size_t rows = m->rows;
    size_t cols = m->cols;
    double *data = m->data;

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            printf("%g\t", data[r*cols + c]);
        }
        printf("\n");
    }
}

extern void delete_matrix(struct matrix *m)
{
    mat_destructor(m);
    free(m);
}

extern struct matrix *mat_transpose(const struct matrix *m)
{
    size_t cols = m->rows;
    size_t rows = m->cols;
    struct matrix *t = new_matrix(m->cols, m->rows);

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            t->data[r * cols + c] = m->data[c * rows +r];
        }
    }

    return t;
}
