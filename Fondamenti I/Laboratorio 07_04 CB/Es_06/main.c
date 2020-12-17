#include "complessi.h"

int main(void)
{
	struct complesso a = { 0,1 };
	struct complesso b = { 0,1 };

	prodotto_complesso(&a, &b);

	return 0;
}
