#ifndef _SSTACK_
#define _SSTACK_
#define MAXSIZE 8
#define OK 1
#define OVERFLOW 0//上溢
#define status int
#define ERR 0

typedef struct
{
	int* base;
	int* top;
}sStack;

status initStack(sStack* s);//初始化
status push(sStack* s,int e);//压栈
status pop(sStack* s, int* e);//出栈
void print(sStack s);//遍历
int stackLength(sStack s);//返回栈的长度

#endif // !_SSTACK_
