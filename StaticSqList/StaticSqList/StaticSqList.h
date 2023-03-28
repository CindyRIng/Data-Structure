#ifndef _STATICSQLIST
#define _STATICSQLIST
#define ElemType int
#define MaxSize 10
#define OK 1
#define ERR 0
#define Status int

typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

Status initList(SqList* L);//��ʼ��
Status isEmpty(SqList L);//�ж��Ƿ�Ϊ��
Status isFull(SqList L);//�ж��Ƿ�Ϊ��
Status insert(SqList* L,int i,ElemType e);//��i������Ԫ��
Status Delete(SqList* L, int i);//ɾ��i����Ԫ��
Status getElem(SqList L, int i,ElemType *e);//����i��Ԫ�ص�ֵ
void  ListTraverse(SqList L);//����


#endif // !_STATICSQLIST
