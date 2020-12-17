#include "torre_cartoni.h"

int main()
{
	cartone a = { 10, 30, 50 };
	cartone b = { 5, 15, 30 };
	cartone c = { 10, 40, 20 };

	cartone arr[N] = { a, b, c };

	int i = 0, altezza = 0; 
	bool* vcurr = malloc(N * sizeof(bool));
	int* vbest = malloc(N * sizeof(int));
	if (vbest)
	{
		int ind[N] = { 0, 1, 2 };

		torre_cartoni(arr, N, i, vcurr, vbest, &altezza, ind);

		for (int j = 0; j < N; ++j)
		{
			printf("%d\n", vbest[j]);
		}
		printf("L'altezza massima e' %d cm\n", altezza);
	}
	
	free(vbest);
	return 0;
}