#include<stdio.h>
#include"sStack.h"
void main()
{
	sStack s;
	if (initStack(&s))
	{
		printf("ջ��ʼ���ɹ���");
	}
	else 
	{
		printf("ջ��ʼ��ʧ�ܣ�");
	}
	for (int i = 0; i < 9; i++)
	{
		if (push(&s, i))
		{
			printf("\n�ɹ�ѹ��Ԫ��%d", i);
		}
		else
		{
			printf("\n����");
		}


	}
	printf("\n��ǰջ�ĳ���Ϊ:%d\n", stackLength(s));
	print(s);
	int temp;
	if (pop(&s, &temp))
	{
		printf("\n���ڳ�ջԪ��:%d", temp);
	}
	else
	{
		printf("\n��ջʧ��");
	}
	printf("\n��ǰջ�ĳ���Ϊ:%d\n", stackLength(s));
	print(s);
}