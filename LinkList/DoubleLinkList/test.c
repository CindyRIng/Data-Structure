#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"DLinkList.h"

void main()
{
	//初始化链表
	LinkList L;
	printf("正在初始化双链表...\n");
	if (init(&L))
		printf("初始化成功!\n");
	else
		printf("初始化失败!\n");

	//插入元素
	printf("开始插入元素:\n");
	for (int i = 1; i < 10; i++)
	{
		if (insert(L, 0, i))
			printf("已插入元素%d\n", i);
		else
			printf("插入失败\n");
	}
	//打印链表
	printList(L);
	//删除元素
	printf("\n正在删除元素...\n");

	if (Ldelete(L, 2))
		printf("删除成功!\n");
	else
		printf("删除失败!\n");

	printList(L);



}