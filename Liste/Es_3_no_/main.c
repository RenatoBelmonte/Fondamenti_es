#include "list_int.h"

extern Item* Diff(const Item* i2, const Item* i2);

int main()
{
	char f1[] = "lista1.txt";
	char f2[] = "lista2.txt";

	Item* l1 = LoadList(f1);
	Item* l2 = LoadList(f2);

	WriteStdoutList(l1);
	WriteStdoutList(l2);

	Item* list = Diff(l1, l2);

	WriteStdoutList(list);

	return 0;
}