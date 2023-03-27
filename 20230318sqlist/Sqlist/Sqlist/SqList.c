#include <stdio.h>
#include "SqList.h"
#include<malloc.h>
#include <stdlib.h>

Status InitList(SqList* L)
{
	L->elem = (ElemType*)malloc(List_Init_Size * sizeof(ElemType));//申请初始大小的内存空间
	if (!L->elem) exit(NO);		//判断基址是否为空，如果为空那么退出
	L->length = 0;				//初始化列表长度数值
	L->listsize = List_Init_Size;//初始化列表大小访问数值
	return OK;
}

Status DestroyList(SqList* L)
{	
	free(L->elem);//释放掉传入的内存空间
	L->length = 0;
	L->listsize = 0;
	return OK;
}

Status ClearList(SqList* L)//不改变顺序表的长度，但是将内容重置为空
{
	free(L->elem);
	L->elem = (ElemType*)malloc(L->listsize * sizeof(ElemType));
	L->length = 0;
	return OK;
}

Status ListEmpty(SqList L)
{
	if (L.length) return OK;
	else return NO;
}

int ListLength(SqList L)
{
	return L.length;
}

Status GetElem(SqList L, int i, ElemType* e)
{	
	if (L.length >= i && i>0)
	{
		*e = L.elem[i-1];
		if (e) return OK;
	}
	else return NO;
}

Status ListInsert(SqList* L, int i, ElemType e)
{
	if (i<1 || i>L->length + 1) return NO;


	if (L->length >= L->listsize)//判断列表是否在插入后超过上限，如果超过的话则申请更大的内存空间
	{
		ElemType *newbase = 
			(ElemType*)realloc(L->elem, (L->listsize + LISTINCREAMENT) * sizeof(ElemType));
		if (!newbase) exit(NO);
		L->elem = newbase;
		L->listsize += LISTINCREAMENT;
	}
	ElemType *q = &(L->elem[i - 1]);


	for (ElemType *p = &(L->elem[(L->length - 1)]); p >= q; --p) *(p + 1) = *p;//插入为位置元素依次向后移动
	*q = e;

	++(L->length);

	return OK;
}

Status ListDelete(SqList* L, int i)
{
	if (i<1 || i>L->length) return NO;

	ElemType *p = &(L->elem[i - 1]);//删除位置
	ElemType* q = L->elem + L->length - 1;//末位置
	for (++p; p <= q; ++p) *(p - 1) = *p; //删除位置后的元素依次向前移动一位
	--(L->length);
	return OK;

}

Status ListTraverse(SqList L)		//由于c语言的局限性，这里只写出int类型和基础类型的遍历
{
	if (L.length == 0)
	{
		printf("This SqList is empty.");
		return NO;
	}
	else
	{
		for (int i = 1; i <= L.length; i++)
		{
			int temp;
			GetElem(L, i, &temp);
			printf("%d ", temp);
		}

		return OK;
	}
}