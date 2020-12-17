#include <stdlib.h>
#include <stdint.h>

uint32_t divisore_minimo(uint32_t x)
{
	if (x < 2)
		return 0;
	
	for (int i = 2; i != x; ++i)
		{
			if (x % i == 0)
				return i;
		}
}

int main()
{

	uint32_t x = 997;

	uint32_t ris = divisore_minimo(x);

	return 0;
}