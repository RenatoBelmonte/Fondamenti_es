#include <stdbool.h>
#include<stdlib.h>

void stazioni(double m, int n, double* d, double* p, bool* vcurr, bool* vbest, int i, double s, double *e)
{
	if (i == n)
	{
		double n_e = 0;
		for (int j = 0; j < n; ++j)
		{
			s -= (0.05 * d[j]);

			if (s < 0)
				return;

			if (vcurr[j])
			{
				n_e += (30 - s) * p[j];
				s = 30;
			}
				
		}

		if (n_e < *e)
		{
			for (int j = 0; j < n; ++j)
			{
				vbest[j] = vcurr[j];
			}

			*e = n_e;
		}

		return;
	}

	vcurr[i] = 0;
	stazioni(m, n, d, p, vcurr, vbest, i + 1, s, e);

	vcurr[i] = 1;
	stazioni(m, n, d, p, vcurr, vbest, i + 1, s, e);

	return;
}