#if !defined COMPLESSI_H
#define COMPLESSI_H

struct complesso
{
	double re, im;
};
extern struct complesso prodotto_complesso(struct complesso comp1, struct complesso comp2);

#endif //COMPLESSI_H