#include "array.h"

int main(void)
{
    size_t n=5;
    double arr1[]={0,1,2,3,4};
    double arr2[]={0,-1,-2,-3,-4};

    double *arrS=array_somma(arr1,arr2,n);

    free(arrS);
    return 0;
}
