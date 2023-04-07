#ifndef _DLINKLIST
#define _DLINKLIST
#define ElemType int
#define status int
#define OK 1
#define ERR 0

typedef struct LNode
{
	ElemType data; //������
	struct LNode* prior;//����ǰ��
	struct LNode* next; //���ݺ���
}LNode,//��������Ԫ��
*LinkList;//ָ��ͷ

status init(LinkList* L);//��ʼ������
status insert(LinkList L, int i, ElemType e);//��i�����ڵ㣬����Ϊe
status Ldelete(LinkList L, int i);//ɾ����i���ڵ�
status destroy(LinkList L);//��������
void printList(LinkList L);//��ӡ������


#endif // !_DLINKLIST
