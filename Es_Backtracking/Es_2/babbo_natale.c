#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void babbo_natale(int p, int const* pacchi, int n, unsigned i, bool* vcurr, bool* vbest)
{
	if (i == n)
	{
		int np = 0, sum = 0;
		for (int j = 0; j < n; ++j)
		{
			sum += vcurr[j] * pacchi[j];

			if (sum > p)
				return;

			if (vcurr[j])
				++np;
		}

		int o_np = 0;
		if (p > o_np)
		{
			for (int j = 0; j < n; ++j)
			{
				vbest[j] = vcurr[j];
			}
		}
		return;
	}

	vcurr[i] = 0;
	babbo_natale(p, pacchi, n, i+1, vcurr, vbest);

	vcurr[i] = 1;
	babbo_natale(p, pacchi, n, i + 1, vcurr, vbest);

	return;
}