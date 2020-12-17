#include "matrix.h"

int main(void)
{
    struct matrix *m = new_matrix(3,3);

    m->data[0] = 1; m->data[1] = 2; m->data[2] = 3;
    m->data[3] = 4; m->data[4] = 5; m->data[5] = 6;
    m->data[6] = 12; m->data[7] = 13; m->data[8] = 14;

    mat_stampa(m);
    printf ("\n");

    struct matrix *t = mat_transpose(m);

    mat_stampa(t);
    printf ("\n");

    delete_matrix(m);
    delete_matrix(t);

    return 0;
}
