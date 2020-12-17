#include "complessi.h"

struct complesso prodotto_complesso(struct complesso comp1, struct complesso comp2)
{ 
	struct complesso ris = { comp1.re * comp2.re - comp1.im * comp2.im,comp1.re * comp2.im + comp1.im * comp2.re };

	return ris;
}