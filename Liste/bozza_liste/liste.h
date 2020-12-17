#if !defined LISTA_H
#define LISTA_H
#define _unused(x) ((void)(x))

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct Item {
	ElemType value;
	struct Item* next;
};
typedef struct Item Item;

typedef int ElemType;
int ElemCompare(const ElemType* e1, const ElemType* e2);
ElemType ElemCopy(const ElemType* e);
ElemType ReadElem(FILE* f);
ElemType ReadStdinElem();
void WriteElem(const ElemType* e, FILE* f);
void WriteList(const Item* i, FILE* f);
void WriteStdoutElem(const ElemType* e);

Item* CreateEmptyList();
Item* InsertHeadList(const ElemType* e, Item* i);
const ElemType* GetHeadValueList(Item* i);
Item* GetTailList(const Item* i);
Item* InsertBackList(Item* i, const ElemType* e);
void DeleteList(Item* item);
bool IsEmptyList(const Item* i);

void WriteStdoutList(const Item* i);

#endif //LISTA_H