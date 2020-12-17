#include <stdio.h>
#include <stdlib.h>

struct matrix
{
    size_t rows, cols;
    double *data;
};

stampa(const struct matrix *m)
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

struct matrix *matrix_constructor(struct matrix *this, size_t rows, size_t cols)
{
    this->rows = rows;
    this->cols = cols;
    this->data = malloc (rows * cols * sizeof(double));

    return this;
}


void delete_matrix (struct matrix *this)
{
    free(this->data);
}

int main()
{
    struct matrix *m = new_matrix(3, 3);

    m->data[0] = 7.2; m->data[1] = 9.8; m->data[2] = 1;
    m->data[3] = 1.0; m->data[4] = 0.2; m->data[5] = 2;
    m->data[6] = 4.0; m->data[7] = 9.0; m->data[8] = 3;

    stampa(&m);

    matrix_destructor(m);
    return 0;
}

    /*{
         7.2, 9.8, 1,
         1.0, 0.2, 2,
         4.0, 9.0, 3,
    };*/
