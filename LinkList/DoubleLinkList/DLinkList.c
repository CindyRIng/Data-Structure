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
	LNode* p = L;//ָ��ͷ�ŵ�ͷָ��
	for (int j = 0; j < i; j++)
	{
		if (p->next = NULL) return ERR;//�ж�i�Ƿ��ڵ�ǰ������
		else p = p->next;//��ָ�붨λ��i��
	}
	if (p->next == NULL)//�������û���¸�Ԫ������������ͷβ�ڵ�
	{
		p->next = (LNode*)malloc(sizeof(LinkList));
		p->next->data = e;
		p->next->next = NULL;
		p->next->prior = p;
	}
	else//������Ҫ����ͷβ�ڵ�
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
	LNode* p = L;//ָ��ͷ�ŵ�ͷָ��
	for (int j = 1; j < i; j++)
	{
		if (p->next == NULL) return ERR;//�ж�i�Ƿ��ڵ�ǰ������
		else p = p->next;//��ָ�붨λ��i-1��
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