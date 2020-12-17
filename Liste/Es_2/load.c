#include "list_int.h"

Item* LoadList(const char* filename)
{
	Item* list = CreateEmptyList();

#pragma warning(suppress: 4996)
	FILE* f = fopen(filename, "r");
	if (!f)
	{
		fclose(f);
		return list;
	}

	while (true)
	{
		int* tmp = malloc(sizeof(int));
#pragma warning(suppress: 4996)
		int ret = fscanf(f, "%d", tmp);
		if (ret == EOF)
		{
			free(tmp);
			fclose(f);
			return list;
		}

		list = InsertHeadList(tmp, list);
	}

	fclose(f);
	return list;
}