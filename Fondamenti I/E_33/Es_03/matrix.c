#include "matrix.h"

struct bmatrix *mat_boolean(const struct matrix *m, double rhs, enum comparison cmp)
{
    if(m == NULL)
        return NULL;

    size_t rows = m->rows;
    size_t cols = m->cols;
    bool *d = malloc(rows*cols*sizeof(double));

    int i = 0;
    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            switch (cmp)
            {
                case LT: d[i] = (m->data[r*cols+c] < rhs); break;
                case LE: d[i] = (m->data[r*cols+c] <= rhs); break;
                case EQ: d[i] = (m->data[r*cols+c] == rhs); break;
                case NE: d[i] = (m->data[r*cols+c] != rhs); break;
                case GE: d[i] = (m->data[r*cols+c] >= rhs); break;
                case GT: d[i] = (m->data[r*cols+c] > rhs); break;
            }
        ++i;
        }
    }
    struct bmatrix *res = malloc(sizeof(struct bmatrix));
    res->rows = rows;
    res->cols = cols;
    res->data = d;

    return res;
}
