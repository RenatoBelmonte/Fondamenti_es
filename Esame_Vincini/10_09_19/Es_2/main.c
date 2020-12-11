#include <stdlib.h>
#include <stdio.h>
#define N 3

void tratta_treno(int* vcurr, int* vbest, int* t1, int* t2, int i, int* s) /** 0: nessun treno   1: TM    2: C   **/
{
	if (i == N)
	{
		int ns = 0;
		for (int j = 0; j < N; ++j)
		{
			if (vcurr[j] == 2 && vcurr[j - 1] == 1)
				return;
		}

		for (int j = 0; j < N; ++j)
		{
			if (vcurr[j] == 0)
				break;
			if (vcurr[j] == 1)
				ns += t1[j];
			else
				ns += t2[j];
		}

		if (ns > *s)
		{
			for (int j = 0; j < N; ++j)
				vbest[j] = vcurr[j];
			*s = ns;
		}


		return;
	}

	vcurr[i] = 0;
	tratta_treno(vcurr, vbest, t1, t2, i + 1, s);
	vcurr[i] = 1;
	tratta_treno(vcurr, vbest, t1, t2, i + 1, s);
	vcurr[i] = 2;
	tratta_treno(vcurr, vbest, t1, t2, i + 1, s);

}

int main()
{
	int tm[N] = { 30, 60, 90 };
	int c[N] = { 120, 100, 50 };

	int* vcurr = malloc(N * sizeof(int));
	int* vbest = malloc(N * sizeof(int));
	int i = 0, somma = 0;

	if (vcurr && vbest)
	{
		tratta_treno(vcurr, vbest, tm, c, i, &somma);
		for (int i = 0; i < N; ++i)
		{
			printf("%d", vbest[i]);
		}
		printf("\n");
	}


	free(vcurr);
	free(vbest);
	return 0;
}