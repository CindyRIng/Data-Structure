#include<stdio.h>
#include"SqList.h"

void main()
{
	//��ʼ�����Ա�
	SqList L;
	printf("���ڳ�ʼ�����Ա�...");
	if (InitList(&L))
		printf("���Ա��ʼ���ɹ�!");
	else
		printf("���Ա��ʼ��ʧ��!");

	//�����Ա��в���ʮ��Ԫ��
	printf("���������Ա����Ԫ��...");
	for (int i = 1; i <= 10; i++)
	{
		if(ListInsert(&L, 1, i))
			printf("����Ԫ��%d\n", i);
		else
			printf("����ʧ��");
	}

	//�������Ա�
	printf("��ǰ���Ա��Ԫ��Ϊ:\n");
	ListTraverse(L);

	//ɾ��Ԫ��
	printf("\n����ɾ��Ԫ��...\n");
	if (ListDelete(&L, 2))
		printf("�Ѿ�ɾ���˵ڶ�λԪ��\n");
	else
		printf("ɾ��ʧ��\n");

	printf("��ǰ���Ա��Ԫ��Ϊ:\n");
	ListTraverse(L);
}