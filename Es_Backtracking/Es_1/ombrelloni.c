#include <stdio.h>
#include<stdbool.h>

void ombrelloni(int k, int n, unsigned i, bool* vcurr, unsigned* nsol)
{
	if (i == n)
	{
		int cnt = 0;
		if (vcurr[n-1] == 1)
			++cnt;

		for (int j = 1; j < n; ++j)
		{
			if (vcurr[j] && vcurr[j - 1])
				return;
			if (vcurr[j-1] == 1)
				++cnt;

		}

		if (cnt != k)
			return; 

		printf("%u) ", *nsol);
		++ *nsol;

		for (int j = 0; j < n; ++j)
		{
			printf("%i ", vcurr[j]);

		}

		printf("\n");
		return;
	}

	vcurr[i] = 0;
	ombrelloni(k, n, i + 1, vcurr, nsol);

	vcurr[i] = 1;
	ombrelloni(k, n, i + 1, vcurr, nsol);

	return;
}