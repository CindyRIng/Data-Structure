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

Status initList(SqList* L);//初始化
Status isEmpty(SqList L);//判断是否为空
Status isFull(SqList L);//判断是否为满
Status insert(SqList* L,int i,ElemType e);//在i处插入元素
Status Delete(SqList* L, int i);//删除i处的元素
Status getElem(SqList L, int i,ElemType *e);//读出i处元素的值
void  ListTraverse(SqList L);//遍历


#endif // !_STATICSQLIST
