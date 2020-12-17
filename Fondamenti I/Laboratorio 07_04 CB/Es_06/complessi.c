#include "complessi.h"

void *prodotto_complesso
    (struct complesso *comp1, const struct complesso *comp2)
{
	double re = comp1->re * comp2->re - comp1->im * comp2->im;
	double im = comp1->re * comp2->im + comp1->im * comp2->re;

	comp1->re =re;
	comp1->im = im;
}
