#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define M 1000


struct cavalli {
	int prezzo;
	size_t vittorie;
};


void bck(bool* vcurr, bool* vbest, struct cavalli* arr, int b, int i, int v)
{
	int j = 0, f = b;
	int t_v = 0;
	if (i == 10)
	{
		for (int k = 0; k < 10; ++k)
		{
			if (vcurr[k])
			{
				++j;
				if (j > 4)
					return;
				
				f -= arr[k].prezzo;
				if (f < 0)
					return;
				
				t_v += arr[k].vittorie;
			}
		}

		if (t_v > v)
		{
			v = t_v;
			for (int j = 0; j < 10; ++j)
			{
				vbest[j] = vcurr[j];
			}
		}

		return;
	}

	vcurr[i] = 0;
	bck(vcurr, vbest, arr, b, i + 1, v);

	vcurr[i] = 1;
	bck(vcurr, vbest, arr, b, i + 1, v);
}

bool* scegli_c(struct cavalli* arr, int b)
{
	bool* vbest = malloc(10 * sizeof(bool));
	bool* vcurr = malloc(10 * sizeof(bool));
	int v = 0;

	if (vcurr && vbest)
	{
		int i = 0;
		bck(vcurr, vbest, arr, b, i, v);
	}
	printf("%d\n", v);

	return vbest;
}

int main()
{
	int budget = M;

	struct cavalli c0 = {800, 40};
	struct cavalli c1 = {100, 5};
	struct cavalli c2 = {50, 3};
	struct cavalli c3 = {51, 20};
	struct cavalli c4 = {300, 10}; 
	struct cavalli c5 = {900, 60};
	struct cavalli c6 = {350, 15};
	struct cavalli c7 = {200, 10};
	struct cavalli c8 = {345, 23};
	struct cavalli c9 = {150, 7};

	struct cavalli arr[] = { c0, c1, c2, c3, c4, c5, c6, c7, c8, c9 };

	bool* vbest = scegli_c(arr, M);

	for (int j = 0; j < 10; ++j)
	{
		printf("%d", vbest[j]);
	}		

	return 0;
}

