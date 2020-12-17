#if !defined MATRIX_H
#define MTRIX_H
#include <stdlib.h>
#include <stdint.h>

    struct matrix {
        size_t rows, cols;
        double *data;
    };

    extern struct matrix *mat_replicate(const struct matrix *m);

#endif //MATRIX_H
