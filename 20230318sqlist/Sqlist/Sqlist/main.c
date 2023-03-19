#include <stdio.h>
#include "SqList.h"

int main()
{
	SqList test;
	InitList(&test);
	printf("%d %d", test.length, test.listsize);
	DestroyList(&test);
	printf("\n%d %d", test.length, test.listsize);
}