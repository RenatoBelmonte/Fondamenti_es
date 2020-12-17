#include <stdlib.h>
#include <stdio.h>

void arca_bck(size_t ca, size_t ga, size_t to, size_t n, size_t* vcurr, size_t i, int* sol)
{
	if (i == n)// no gane-gatto o gatto topo
	{
		size_t c = 0, g = 0, t = 0;
		for (size_t k = 0; k < n; ++k)
		{
			if (vcurr[k] == 0)
				++c;
			else if (vcurr[k] == 1)
				++g;
			else if (vcurr[k] == 2)
				++t;

			if (vcurr[k] == 0 && vcurr[k + 1] == 1)
				return;
			if (vcurr[k] == 1 && vcurr[k + 1] == 2)
				return;
		}

		if (c != 3 || g != 3 || t != 3)
			return;

		printf("%d)", *sol);
		++*sol;
		for (size_t k = 0; k < n; ++k)
		{
			printf("%d", vcurr[k]);
		}

		printf("\n");
		return;
	}
		

	vcurr[i] = 0;
	arca_bck(ca, ga, to, n, vcurr, i + 1, sol);

	vcurr[i] = 1;
	arca_bck(ca, ga, to, n, vcurr, i + 1, sol);

	vcurr[i] = 2;
	arca_bck(ca, ga, to, n, vcurr, i + 1, sol);
}

int main()
{
	size_t cani = 3, gatti = 3, topi = 3, celle = 9, i = 0; //cani -> 0  gatti -> 1  topi -> 2
	
	size_t* vcurr = malloc(sizeof(size_t) * celle);
	int sol = 1;
	if (vcurr)
	{
		arca_bck(cani, gatti, topi, celle, vcurr, i, &sol);
	}

	

	return 0;
}