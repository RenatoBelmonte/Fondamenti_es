#include "vec_double.h"

int main(void)
{
    char *nome1 = "seq1", *nome2 = "seq2", *nome3 = "seq3";

    struct vec_double *res = read_vec_double(nome1);
    res = read_vec_double(nome2);
    res = read_vec_double(nome3);

    free(res);
    return 0;
}
