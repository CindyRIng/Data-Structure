#include<stdio.h>
#include"SqList.h"

void main()
{
	SqList L;
	InitList(&L);
	for (int i = 1; i < 10; i++)
	{
		ListInsert(&L, 1, i);
	}

	ListTraverse(L);
}