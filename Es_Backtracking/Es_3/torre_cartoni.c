#include "torre_cartoni.h"

void permuta(int n, int i, int* arr, cartone* c, unsigned *h, int* vbest)
{
	if (i == n)
	{
		unsigned o_h = c[arr[0]].a;
		unsigned sum = c[arr[0]].p;

		for (int j = 1; j < n-1; ++j)
		{
			sum = c[arr[j]].p;
			if (sum > c[arr[j - 1]].l)
				return;

			o_h =+ c[arr[j]].a;
		}

		if (o_h > *h)
		{
			*h = o_h;
			for (int j = 0; j < n; ++j)
			{
				vbest[j] = arr[j]; 
			}
		}

		return;
	}

	for (int j = i; j < n; ++j)
	{
		int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
		permuta(n, i + 1, arr, c, h, vbest);
		tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
	}
}

void torre_cartoni(cartone* c, int n, int i, bool* vcurr, int* vbest, unsigned* h, int* ind)
{
	if (i == n)
	{
		permuta(n, i, ind, c, h, vbest);
		return;
	}

	for (int j = i; j < n; ++j)
	{
		int tmp = ind[i]; ind[i] = ind[j]; ind[j] = tmp;
		torre_cartoni(c, n, i+1, vcurr, vbest, h, ind);
		tmp = ind[i]; ind[i] = ind[j]; ind[j] = tmp;
	}

	return;
}
