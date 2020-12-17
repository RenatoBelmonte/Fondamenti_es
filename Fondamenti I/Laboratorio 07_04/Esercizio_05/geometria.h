#if !defined GEOMETRIA_H
#define GEOMETRIA_H
#include <stdbool.h>

struct punto
{
	double x, y;
};

extern bool colineari(struct punto p1, struct punto p2, struct punto p3);

#endif //GEOMETRIA_H
