#include "complessi.h"

int main(void)
{
	struct complesso a = { 3,14 };
	struct complesso b = { 10,2 };

	struct complesso c = prodotto_complesso(a, b);

	return 0;
}