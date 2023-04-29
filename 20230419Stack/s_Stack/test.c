#include<stdio.h>
#include"sStack.h"
void main()
{
	sStack s;
	if (initStack(&s))
	{
		printf("栈初始化成功！");
	}
	else 
	{
		printf("栈初始化失败！");
	}
	for (int i = 0; i < 9; i++)
	{
		if (push(&s, i))
		{
			printf("\n成功压入元素%d", i);
		}
		else
		{
			printf("\n上溢");
		}


	}
	printf("\n当前栈的长度为:%d\n", stackLength(s));
	print(s);
	int temp;
	if (pop(&s, &temp))
	{
		printf("\n正在出栈元素:%d", temp);
	}
	else
	{
		printf("\n出栈失败");
	}
	printf("\n当前栈的长度为:%d\n", stackLength(s));
	print(s);
}