#include<stdio.h>
#include<malloc.h>
#include"sStack.h"

status initStack(sStack* s)
{
	s->base = (int*)malloc(sizeof(int) * MAXSIZE);
	s->top = s->base;
	if (s->base && s->top == s->base) return OK;//����Ƿ��ʼ���ɹ�
	else return ERR;

}
status push(sStack* s,int e)
{
	if (s->top - s->base >= MAXSIZE) return OVERFLOW;//����Ƿ������
	else
	{
		*(s->top) = e;
		s->top++;
		return OK;
	}
	
}
status pop(sStack* s, int* e)
{
	if (s->top == s->base) return ERR;//���ջ�Ƿ�Ϊ��
	else
	{
		*e = *(s->top-1);
		s->top--;
		return OK;
	}
}
void print(sStack s)
{
	for (int i = 0; i < stackLength(s); i++)
	{
		printf("%d ", s.base[i]);
	}
}
int stackLength(sStack s)
{
	return s.top - s.base;
}