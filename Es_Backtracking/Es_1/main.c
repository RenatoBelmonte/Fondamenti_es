#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

extern void ombrelloni(int k, int n, unsigned i, bool* vcurr, unsigned* nsol);


int main()
{
	int n_per = 3;
	int omb = 6;
	unsigned i = 0, nsol = 0;
	bool *vcurr = malloc(5 * sizeof(bool));
	
	if (vcurr)
	{
		ombrelloni(n_per, omb, i, vcurr, &nsol);

		if (nsol == 0)
			printf("Non esistono suluzioni compatibili\n");
	}

	free(vcurr);
	return 0;
}
 