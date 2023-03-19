#include <stdio.h>
#include "SqList.h"

int main()
{
	SqList test;
	InitList(&test);
	printf("%d %d", test.length, test.listsize);
	
	ListInsert(&test, 1, 2);
	int a;
	GetElem(test, 1, &a);
	printf("\n%d %d %d", test.length, test.listsize,a);


}