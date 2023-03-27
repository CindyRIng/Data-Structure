#include <stdio.h>
#include "SqList.h"
#include<malloc.h>
#include <stdlib.h>

Status InitList(SqList* L)
{
	L->elem = (ElemType*)malloc(List_Init_Size * sizeof(ElemType));//�����ʼ��С���ڴ�ռ�
	if (!L->elem) exit(NO);		//�жϻ�ַ�Ƿ�Ϊ�գ����Ϊ����ô�˳�
	L->length = 0;				//��ʼ���б�����ֵ
	L->listsize = List_Init_Size;//��ʼ���б��С������ֵ
	return OK;
}

Status DestroyList(SqList* L)
{	
	free(L->elem);//�ͷŵ�������ڴ�ռ�
	L->length = 0;
	L->listsize = 0;
	return OK;
}

Status ClearList(SqList* L)//���ı�˳���ĳ��ȣ����ǽ���������Ϊ��
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


	if (L->length >= L->listsize)//�ж��б��Ƿ��ڲ���󳬹����ޣ���������Ļ������������ڴ�ռ�
	{
		ElemType *newbase = 
			(ElemType*)realloc(L->elem, (L->listsize + LISTINCREAMENT) * sizeof(ElemType));
		if (!newbase) exit(NO);
		L->elem = newbase;
		L->listsize += LISTINCREAMENT;
	}
	ElemType *q = &(L->elem[i - 1]);


	for (ElemType *p = &(L->elem[(L->length - 1)]); p >= q; --p) *(p + 1) = *p;//����Ϊλ��Ԫ����������ƶ�
	*q = e;

	++(L->length);

	return OK;
}

Status ListDelete(SqList* L, int i)
{
	if (i<1 || i>L->length) return NO;

	ElemType *p = &(L->elem[i - 1]);//ɾ��λ��
	ElemType* q = L->elem + L->length - 1;//ĩλ��
	for (++p; p <= q; ++p) *(p - 1) = *p; //ɾ��λ�ú��Ԫ��������ǰ�ƶ�һλ
	--(L->length);
	return OK;

}

Status ListTraverse(SqList L)		//����c���Եľ����ԣ�����ֻд��int���ͺͻ������͵ı���
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