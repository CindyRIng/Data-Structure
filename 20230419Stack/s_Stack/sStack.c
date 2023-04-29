#include<stdio.h>
#include<malloc.h>
#include"sStack.h"

status initStack(sStack* s)
{
	s->base = (int*)malloc(sizeof(int) * MAXSIZE);
	s->top = s->base;
	if (s->base && s->top == s->base) return OK;//检查是否初始化成功
	else return ERR;

}
status push(sStack* s,int e)
{
	if (s->top - s->base >= MAXSIZE) return OVERFLOW;//检查是否上溢出
	else
	{
		*(s->top) = e;
		s->top++;
		return OK;
	}
	
}
status pop(sStack* s, int* e)
{
	if (s->top == s->base) return ERR;//检查栈是否为空
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