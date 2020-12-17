#include "list_int.h"

extern Item* LoadList(const char* filename);

int main()
{
	const char f[] = "prova.txt";

	Item* list = LoadList(f);

	WriteStdoutList(list);

	return 0;
}