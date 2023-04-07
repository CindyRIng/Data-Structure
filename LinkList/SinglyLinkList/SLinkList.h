#ifndef _SLINKLIST
#define _SLINKLIST
#define ElemType int
#define status int
#define OK 1
#define ERR 0

typedef struct LNode
{
	ElemType data; //数据域
	struct LNode* next; //指针域
}LNode,//任意链表元素
*LinkList;//指针头

status init(LinkList *L);//初始化链表
status select(LinkList L, int i, ElemType *e);//查询i处的元素值通过e输出
status find(LinkList L, ElemType e,LNode* *t);//返回第一次出现元素e的地址
status insert(LinkList L, int i, ElemType e);//在i后插入节点，数据为e
status Ldelete(LinkList L, int i);//删除第i个节点
status destroy(LinkList L);//销毁链表
int getLength(LinkList L);//获取链表长度
void printList(LinkList L);//打印此链表
status ListInverse(LinkList L);//链表逆置



#endif // !_SLINKLIST
