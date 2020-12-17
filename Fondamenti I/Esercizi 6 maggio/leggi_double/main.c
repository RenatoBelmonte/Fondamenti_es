#include "lettura.h"

int main(void)
{
    const char filename[] = "dati";
    size_t n_elementi = 0;

    double *num = leggidouble(&filename, &n_elementi);

    return 0;
}
