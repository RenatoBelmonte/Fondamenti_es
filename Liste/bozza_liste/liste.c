#include "liste.h"


int ElemCompare(const ElemType* e1, const ElemType* e2)
{
	return (*e1 > *e2) - (*e1 < *e2);
}

ElemType ElemCopy(const ElemType* e) 
{
	return *e;
}

ElemType ReadElem(FILE* f)
{
	ElemType e=0;
	//fscanf(f, "%d", &e);
	return e;
}

ElemType ReadStdinElem()
{
	return ReadElem(stdin);
}

void WriteElem(const ElemType* e, FILE* f)
{
	fprintf(f, "%d", *e);
}


void WriteStdoutElem(const ElemType* e)
{
	WriteElem(e, stdout);
}


Item* CreateEmptyList()
{
	return NULL;
}

Item* InsertHeadList(const ElemType* e, Item* i)
{
	Item* t = malloc(sizeof(Item));
	if (t)
	{
		t->value = ElemCopy(e);
		t->next = i;
	}

	return t;
}


const ElemType* GetHeadValueList(Item* i)
{
	if (IsEmptyList(i))
		printf("ERROR: Alla funzione 'GetHeadList()' e' stata passata una lista vuota (NULL pointer).\n");
	exit(1);

	return &(i->value);
}

Item* GetTailList(const Item* i)
{
	if (IsEmptyList(i))
		printf("ERROR: Alla funzione 'GetHeadList()' e' stata passata una lista vuota (NULL pointer).\n");
	exit(2);

	return i->next;
}

Item* InsertBackList(Item* i, const ElemType* e)
{
	Item* n = InsertHeadList(e, CreateEmptyList());

	if (IsEmptyList(i))
		return n;

	Item* tmp = i;
	while (!IsEmptyList(GetTailList(tmp)))
	{
		tmp = GetTailList(tmp);
	}
	tmp->next = n;

	return i;
}

void ElemDelete(ElemType* t)
{
	_unused(t);
}

void DeleteList(Item* item)
{
	while (!IsEmptyList(item))
	{
		Item* tmp = item;
		item = item->next;
		ElemDelete(&tmp->value);
		free(tmp);
	}
}

bool IsEmptyList(const Item* i)
{
	return i == NULL;
}

void WriteList(const Item* i, FILE* f)
{
	printf("[");

	while (!IsEmptyList(i))
	{
		WriteElem(&i->value, f);
		i = GetTailList(i);
		if (!IsEmptyList(i))
			printf(", ");
	}

	printf("]");
}

void WriteStdoutList(const Item* i)
{
	WriteList(i, stdout);
}