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

Status InitList(SqList *L);//����һ���յ����Ա�
Status DestroyList(SqList* L);//�������Ա�
Status ClearList(SqList* L);//������Ա�
Status ListEmpty(SqList L);//����˱��Ƿ�Ϊ��
int ListLength(SqList L);//�������Ա�ĳ���
Status GetElem(SqList L, int i, ElemType* e);//��ȡi����Ԫ��ͨ��e����
Status ListInsert(SqList* L, int i, ElemType e);//��iǫ����һ��Ԫ��e
Status ListDelete(SqList* L, int i);//ɾ����i��Ԫ��




#endif // !SQLIST.h
