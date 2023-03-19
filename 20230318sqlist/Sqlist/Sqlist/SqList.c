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
	if (L.length > i && i>0)
	{
		*e = L.elem[i];
		if (e) return OK;
	}
	else return NO;
	
}