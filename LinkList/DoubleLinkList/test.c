#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"DLinkList.h"

void main()
{
	//��ʼ������
	LinkList L;
	printf("���ڳ�ʼ��˫����...\n");
	if (init(&L))
		printf("��ʼ���ɹ�!\n");
	else
		printf("��ʼ��ʧ��!\n");

	//����Ԫ��
	printf("��ʼ����Ԫ��:\n");
	for (int i = 1; i < 10; i++)
	{
		if (insert(L, 0, i))
			printf("�Ѳ���Ԫ��%d\n", i);
		else
			printf("����ʧ��\n");
	}
	//��ӡ����
	printList(L);
	//ɾ��Ԫ��
	printf("\n����ɾ��Ԫ��...\n");

	if (Ldelete(L, 2))
		printf("ɾ���ɹ�!\n");
	else
		printf("ɾ��ʧ��!\n");

	printList(L);



}