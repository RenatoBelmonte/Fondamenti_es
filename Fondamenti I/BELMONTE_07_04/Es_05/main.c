#include "geometria.h"

int main()
{
	struct punto p1 = {4,3};
	struct punto p2 = {4,4};
	struct punto p3 = {4,8};

	bool val = colineari(p1, p2, p3);

	return 0;
}
