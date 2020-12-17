#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 5
extern void stazioni(double m, int n, double* d, double* p, bool* vcurr, bool* vbest, int i, double s, double *e);

int main()
{
	double km = 1540;
	double distanze[N] = { 260, 284, 308, 332, 356 };
	double prezzi[N] = {35, 35, 33, 29, 23};

	bool* vbest = malloc(N * sizeof(bool));
	bool* vcurr = malloc(N * sizeof(bool));
	if (vcurr && vbest)
	{
		int i = 0;
		double serbatoio = 30;
		double spesa = LONG_MAX;

		stazioni(km, N, distanze, prezzi, vcurr, vbest, i, serbatoio, &spesa);

		for (int j = 0; j < N; ++j)
		{
			if (vbest[j])
				printf("%d ", j);
		}

		printf("\nil totale pagato e'%lf euro\n", spesa);
	}
	
	free(vcurr);
	free(vbest);
	return 0;
}



