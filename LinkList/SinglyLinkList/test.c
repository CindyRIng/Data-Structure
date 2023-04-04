#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"SLinkList.h"

void main()
{
	LinkList L;
	init(&L);
	for (int i = 0; i < 10; i++)
	{
		insert(L, 0, i);
	}
	printf("%d\n", getLength(L));
	printList(L);
	int e;
	select(L, 5, &e);
	LNode* t;
	find(L, 5, &t);
	printf("\n%d", t->data);

}