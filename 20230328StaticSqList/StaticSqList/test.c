#include<stdio.h>
#include"StaticSqList.h"

void main()
{
	SqList L;
	initList(&L);
	for (int i = 1; i <= 5; i++)
	{
		insert(&L, 1, i);
	}
	printf("%d\n", L.length);
	ListTraverse(L);
}