#include <stdlib.h>
#include <stdint.h>

float prodotto_scalare(float* v1, float *v2, size_t n)
{
	float ris = 0;
	for (unsigned int i = 0; i < n; ++i)
	{
		ris += v1[i] * v2[i];
	}
	return ris;
}

int main()
{
	float v1[] = { 3,14 };
	float v2[] = { 10,2 };

	float ps = prodotto_scalare(v1, v2, 2);

	return 0;
}