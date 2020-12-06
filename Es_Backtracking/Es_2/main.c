#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define N  8

extern void babbo_natale(int p, int const* pacchi, int n, unsigned i, bool* vcurr, bool* vbest);

int main()
{
	int portata = 200;
	int const peso_pacchi[N] = {10, 20, 30, 40, 50, 60, 70, 80};
	int n_pacchi = N;
	unsigned i = 0;
	bool* vcurr = malloc(N * sizeof(bool));
	bool* vbest = malloc(N * sizeof(bool));
	
	if (vcurr && vbest)
	{
		babbo_natale(portata, peso_pacchi, n_pacchi, i, vcurr, vbest);

		for (int j = 0; j < n_pacchi; ++j)
		{
			printf("%i", vbest[j]);
		}
		printf("\n");
	}
	
	return 0;
}