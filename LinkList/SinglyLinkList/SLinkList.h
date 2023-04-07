#ifndef _SLINKLIST
#define _SLINKLIST
#define ElemType int
#define status int
#define OK 1
#define ERR 0

typedef struct LNode
{
	ElemType data; //������
	struct LNode* next; //ָ����
}LNode,//��������Ԫ��
*LinkList;//ָ��ͷ

status init(LinkList *L);//��ʼ������
status select(LinkList L, int i, ElemType *e);//��ѯi����Ԫ��ֵͨ��e���
status find(LinkList L, ElemType e,LNode* *t);//���ص�һ�γ���Ԫ��e�ĵ�ַ
status insert(LinkList L, int i, ElemType e);//��i�����ڵ㣬����Ϊe
status Ldelete(LinkList L, int i);//ɾ����i���ڵ�
status destroy(LinkList L);//��������
int getLength(LinkList L);//��ȡ������
void printList(LinkList L);//��ӡ������
status ListInverse(LinkList L);//��������



#endif // !_SLINKLIST
