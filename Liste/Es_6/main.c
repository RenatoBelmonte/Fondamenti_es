#include "list_int.h"

extern Item* LoadList(const char* filename);
extern ElemType MaxElement(const Item* i);

int main()
{
	const char f[] = "prova.txt";
	Item* list = LoadList(f);

	ElemType res = MaxElement(list);
	WriteStdoutElem(&res);
	printf("\n");

	return 0;
}