#include<stdio.h>
#include"SqList.h"

void main()
{
	//初始化线性表
	SqList L;
	printf("正在初始化线性表...");
	if (InitList(&L))
		printf("线性表初始化成功!");
	else
		printf("线性表初始化失败!");

	//向线性表中插入十个元素
	printf("正在向线性表插入元素...");
	for (int i = 1; i <= 10; i++)
	{
		if(ListInsert(&L, 1, i))
			printf("插入元素%d\n", i);
		else
			printf("插入失败");
	}

	//遍历线性表
	printf("当前线性表的元素为:\n");
	ListTraverse(L);

	//删除元素
	printf("\n正在删除元素...\n");
	if (ListDelete(&L, 2))
		printf("已经删除了第二位元素\n");
	else
		printf("删除失败\n");

	printf("当前线性表的元素为:\n");
	ListTraverse(L);
}