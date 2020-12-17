#include "lettura.h"

int main(void)
{
    const char filename[] = "dati_binari";
    size_t n_elementi = 0;

    int *interi = leggiinteri(&filename, &n_elementi);
    return 0;
}
