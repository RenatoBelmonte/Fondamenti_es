#include <stdio.h>
#include <stdlib.h>


int somma_vett(int* arr, size_t n);


int main()
{
	int vett[] = { 22, 23, 565, 41, -4, 4 };
	size_t n = 6;

	 int ret = somma_vett(vett, n);
	 int ver = 22 + 23 + 565 + 41;

	printf("la somma e' = %d\n%d\n", ret, ver);

	return 0;
}