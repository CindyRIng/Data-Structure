#include <stdio.h>
#include "SqList.h"
#include<malloc.h>
#include <stdlib.h>

Status InitList(SqList* L)
{
	L->elem = (ElemType*)malloc(List_Init_Size * sizeof(ElemType));
	if (!L->elem) exit(NO);
	L->length = 0;
	L->listsize = List_Init_Size;
	return OK;
}

Status DestroyList(SqList* L)
{	
	free(L->elem);
	L->length = 0;
	L->listsize = 0;
	return OK;
}

Status ClearList(SqList* L)
{
	free(L->elem);
	L->elem = (ElemType*)malloc(L->listsize * sizeof(ElemType));
	L->length = 0;
	return OK;
}

Status ListEmpty(SqList L)
{
	if (L.length) return OK;
	else return NO;
}

int ListLength(SqList L)
{
	return L.length;
}

Status GetElem(SqList L, int i, ElemType* e)
{	
	if (L.length >= i && i>0)
	{
		*e = L.elem[i-1];
		if (e) return OK;
	}
	else return NO;
}

Status ListInsert(SqList* L, int i, ElemType e)
{
	if (i<1 || i>L->length + 1) return NO;
	if (L->length >= L->listsize)
	{
		ElemType *newbase = 
			(ElemType*)realloc(L->elem, (L->listsize + LISTINCREAMENT) * sizeof(ElemType));
		if (!newbase) exit(NO);
		L->elem = newbase;
		L->listsize += LISTINCREAMENT;
	}
	ElemType *q = &(L->elem[i - 1]);
	for (ElemType *p = &(L->elem[(L->length - 1)]); p >= q; --p) *(p + 1) = *p;
	*q = e;
	++(L->length);

	return OK;
}

Status ListDelete(SqList* L, int i)
{
	if (i<1 || i>L->length) return NO;
	ElemType *p = &(L->elem[i - 1]);
	ElemType* q = L->elem + L->length - 1;
	for (++p; p <= q; ++p) *(p - 1) = *p;
	--(L->length);
	return OK;

}