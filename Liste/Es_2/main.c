#include "list_int.h"

extern Item* LoadList(const char* filename);
extern Item* Intersect(const Item* i1, const Item* i2);

int main()
{
	char f1[] = "lista1.txt";
	char f2[] = "lista2.txt";

	Item* l1 = LoadList(f1);
	Item* l2 = LoadList(f2);

	WriteStdoutList(l1);
	WriteStdoutList(l2);

	Item* list = Intersect(l1, l2);

	WriteStdoutList(list);

	return 0;
}