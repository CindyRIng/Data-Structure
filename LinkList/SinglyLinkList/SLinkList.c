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
	LNode* p = L;//ָ��ͷ�ŵ�ͷָ��
	for (int j = 0; j < i; j++)
	{
		if (p->next = NULL) return ERR;//�ж�i�Ƿ��ڵ�ǰ������
		else p = p->next;//��ָ�붨λ��i��
	}
	if (p->next==NULL)//�������û���¸�Ԫ������������ͷβ�ڵ�
	{
		p->next = (LNode*)malloc(sizeof(LinkList));
		p->next->data = e;
		p->next->next = NULL;
	}
	else//������Ҫ����ͷβ�ڵ�
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
	LNode* p = L;//��λ��ͷָ��
	LNode *q;
	if (p != NULL)//������ָ�벻Ϊ�����ͷſռ䲢��¼��һ��ָ��λ��
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
	LNode* p = L;//ָ��ͷ�ŵ�ͷָ��
	for (int j = 1; j < i; j++)
	{
		if (p->next = NULL) return ERR;//�ж�i�Ƿ��ڵ�ǰ������
		else p = p->next;//��ָ�붨λ��i-1��
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