#ifndef _SSTACK_
#define _SSTACK_
#define MAXSIZE 8
#define OK 1
#define OVERFLOW 0//����
#define status int
#define ERR 0

typedef struct
{
	int* base;
	int* top;
}sStack;

status initStack(sStack* s);//��ʼ��
status push(sStack* s,int e);//ѹջ
status pop(sStack* s, int* e);//��ջ
void print(sStack s);//����
int stackLength(sStack s);//����ջ�ĳ���

#endif // !_SSTACK_
