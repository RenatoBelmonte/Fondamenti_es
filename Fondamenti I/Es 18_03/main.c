#include <stdint.h>
#include <stdlib.h>
#include "../../../Libreria/funzioni_base.h"

int main(void)
{
    int *v;
    size_t n=1;

    v=malloc(n*sizeof(int));
    v[0]=27;

    /*come aggiungere un altro valore???*/

    //creare una nuova zona di memoria più grande
        int *tmp=malloc((n+1)*(sizeof(int)));
    //copiare tutti gli elementi di v e li metto nella nuova memoria
        copy(tmp,v,n);
    //aggiungo il nuovo elemento

    //libero la vecchia memoria
    //faccio puntare v alla nuova memoria
    //aumento le dimensioni del vettore n

    free(v);
    return 0;
}
