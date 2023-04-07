#include<stdio.h>
#include"DLinkList.h"
#include<malloc.h>

status init(LinkList* L)
{
	(*L) = (LinkList)malloc(sizeof(LNode));
	(*L)->data = 0;
	(*L)->next = NULL;
	(*L)->prior = NULL;
}

status insert(LinkList L, int i, ElemType e)
{
	LNode* p = L;//指针头放到头指针
	for (int j = 0; j < i; j++)
	{
		if (p->next = NULL) return ERR;//判断i是否在当前链表中
		else p = p->next;//将指针定位到i处
	}
	if (p->next == NULL)//如果链表没有下个元素则无需链接头尾节点
	{
		p->next = (LNode*)malloc(sizeof(LinkList));
		p->next->data = e;
		p->next->next = NULL;
		p->next->prior = p;
	}
	else//否则需要链接头尾节点
	{
		LNode* temp = p->next;
		p->next = (LNode*)malloc(sizeof(LinkList));
		p->next->data = e;
		p->next->next = temp;
		p->next->prior = p;
	}
	return OK;
}
status Ldelete(LinkList L, int i)
{
	LNode* p = L;//指针头放到头指针
	for (int j = 1; j < i; j++)
	{
		if (p->next == NULL) return ERR;//判断i是否在当前链表中
		else p = p->next;//将指针定位到i-1处
	}
	p->next = p->next->next;
	p->next->prior = p;
	return OK;
}
void printList(LinkList L)
{
	LNode* p = L;
	while (p->next != NULL)
	{
		printf("%d", p->next->data);
		p = p->next;
	}
}