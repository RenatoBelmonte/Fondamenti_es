#ifndef TORRE_CARTONI_H
#define TORRE_CARTONI_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 3

typedef struct {
	unsigned p; //peso
	unsigned a; //altezza
	unsigned l; //limite
}cartone;


extern void torre_cartoni(cartone* c, int n, int i, bool* vcurr, int* vbest, unsigned *h, int* ind);

#endif // TORRE_CARTONI_H
