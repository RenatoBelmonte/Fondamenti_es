#include <stdlib.h>

extern char* converti(unsigned int n);

int main(void)
{
	unsigned int a = 87452;

	char *s = converti(a);

	return 0;
}
