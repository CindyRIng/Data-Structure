#include<stdio.h>
#include<malloc.h>
#include"SLinkList.h"

status init(LinkList *L)
{
	*L = (LinkList)malloc(sizeof(LNode));
	(*L)->data = 0;
	(*L)->next = NULL;
	return OK;
}
status insert(LinkList L, int i, ElemType e)
{
	LNode* p = L;//指针头放到头指针
	for (int j = 0; j < i; j++)
	{
		if (p->next = NULL) return ERR;//判断i是否在当前链表中
		else p = p->next;//将指针定位到i处
	}
	if (p->next==NULL)//如果链表没有下个元素则无需链接头尾节点
	{
		p->next = (LNode*)malloc(sizeof(LinkList));
		p->next->data = e;
		p->next->next = NULL;
	}
	else//否则需要链接头尾节点
	{
		LNode* temp = p->next;
		p->next = (LNode*)malloc(sizeof(LinkList));
		p->next->data = e;
		p->next->next = temp;
	}
	return OK;
}

status find(LinkList L, ElemType e, LNode** t)
{
	LNode* p = L;
	while (p->next != NULL)
	{
		if (p->data == e)
		{
			*t = p;
			return OK;
		}
		else p = p->next;
	}

	return ERR;
}

status destroy(LinkList L)
{
	LNode* p = L;//定位到头指针
	LNode *q;
	if (p != NULL)//如果这个指针不为空则释放空间并记录下一个指针位置
	{
		q = p->next;
		free(p);
		p = q;
	}
	return OK;
}

status select(LinkList L, int i, ElemType* e)
{	
	LNode* p = L;
	for (int j = 1; j <= i; j++)
	{
		if (p->next == NULL) return ERR;
		else p = p->next;
	}
	*e = p->data;
	return OK;
}


status Ldelete(LinkList L, int i)
{
	LNode* p = L;//指针头放到头指针
	for (int j = 1; j < i; j++)
	{
		if (p->next = NULL) return ERR;//判断i是否在当前链表中
		else p = p->next;//将指针定位到i-1处
	}
	p->next = p->next->next;
	return OK;
}

int getLength(LinkList L)
{
	int count = 0;
	LNode* p = L;
	while (p->next!=NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}

void printList(LinkList L)
{

	LNode* p = L;
	while (p->next!=NULL)
	{
		printf("%d",p->next->data);
		p = p->next;
	}
}