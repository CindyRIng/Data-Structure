#include<stdio.h>
#include"StaticSqList.h"

Status initList(SqList* L)
{
	for (int i = 0; i < MaxSize; i++)
	{
		L->data[i] = 0;
	}
	L->length = 0;
	if (!L->data) return ERR;
	else return OK;
}
Status isEmpty(SqList L)
{
	if (!L.length) return ERR;
	else return OK;
}
Status isFull(SqList L)
{
	if (L.length == MaxSize) return OK;
	else return ERR;
}
Status insert(SqList* L, int i,ElemType e)
{
	if (e<1 || e>L->length - 1 || L->length == MaxSize) return ERR;
	else
	{
		for (int j = L->length; j > i - 1; j--)
		{
			L->data[j] = L->data[j - 1];
		}
		L->data[i - 1] = e;
		L->length++;
		return OK;
	}
}
Status Delete(SqList* L, int i)
{
	int index = i - 1;
	if (i<1 || i>L->length) return ERR;
	else
	{
		for (int j = index; j < L->length; j++)
		{
			L->data[j] = L->data[j + 1];
		}
		L->length--;
		return OK;
	}
}
Status getElem(SqList L,int i, ElemType* e)
{
	*e = L.data[i - 1];
}
void  ListTraverse(SqList L)
{
	for (int i = 1; i <= L.length; i++)
	{
		int temp;
		getElem(L, i, &temp);
		printf("%d ", temp);
	}
}