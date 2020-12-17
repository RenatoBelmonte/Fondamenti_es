#include "angoli.h"

int main(void)
{
    struct angolo alfa = {230, 47, 12};
    struct angolo beta = {45, 23, 4};

    struct angolo ris = somma_angoli(alfa, beta);

    return 0;
}
