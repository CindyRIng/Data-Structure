#ifndef _SQLIST_H
#define _SQLIST_H

#define List_Init_Size 100
#define LISTINCREAMENT 10
#define ElemType int
typedef int Status;
#define OK 1
#define NO 0


typedef struct {
	ElemType* elem;
	int length;
	int listsize;
}SqList;

Status InitList(SqList *L);//构造一个空的线性表
Status DestroyList(SqList* L);//销毁线性表
Status ClearList(SqList* L);//清空线性表
Status ListEmpty(SqList L);//检验此表是否为空
int ListLength(SqList L);//返回线性表的长度
Status GetElem(SqList L, int i, ElemType* e);//获取i处的元素通过e传出
Status ListInsert(SqList* L, int i, ElemType e);//在i谦插入一个元素e
Status ListDelete(SqList* L, int i);//删除第i个元素




#endif // !SQLIST.h
