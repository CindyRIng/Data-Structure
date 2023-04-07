#ifndef _DLINKLIST
#define _DLINKLIST
#define ElemType int
#define status int
#define OK 1
#define ERR 0

typedef struct LNode
{
	ElemType data; //数据域
	struct LNode* prior;//数据前驱
	struct LNode* next; //数据后驱
}LNode,//任意链表元素
*LinkList;//指针头

status init(LinkList* L);//初始化链表
status insert(LinkList L, int i, ElemType e);//在i后插入节点，数据为e
status Ldelete(LinkList L, int i);//删除第i个节点
status destroy(LinkList L);//销毁链表
void printList(LinkList L);//打印此链表


#endif // !_DLINKLIST
