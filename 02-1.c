//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include "02-linkList1.h"
//
//void test1()
//{
//	//��ʼ������
//	struct LinkNode* pHeader = initLinkList();
//
//	//��������
//	printf("����������Ϊ��\n");
//	foreach_LinkList(pHeader);// 1 4 5 7
//
//	//�������� new����oldǰ�� ���û�ж�Ӧold����嵽ĩβ
//	insert_LinkList(pHeader, 4, 2);
//	insert_LinkList(pHeader, 4, 3);
//	insert_LinkList(pHeader, -1, 8);
//	insert_LinkList(pHeader, 7, 6);
//	printf("��������󣬱���������Ϊ��\n");
//	foreach_LinkList(pHeader);// 1 2 3 4 5 6 7 8
//
//	//��������ڵ����
//	printf("��ǰ����ڵ�������Ϊ��%d\n", size_LinkList(pHeader));//8
//
//	//��ת����
//	reverse_LinkList(pHeader);
//	printf("��ת������Ϊ��\n");
//	foreach_LinkList(pHeader);// 8 7 6 5 4 3 2 1
//
//	//ɾ������
//	delete_LinkList(pHeader, 2);
//	delete_LinkList(pHeader, 3);
//	delete_LinkList(pHeader, 4);
//	delete_LinkList(pHeader, -1);
//	printf("ɾ������󣬱���������Ϊ��\n");
//	foreach_LinkList(pHeader);// 8 7 6 5 1
//
//	//�������
//	clear_LinkList(pHeader);
//	printf("�������󣬱���������Ϊ��\n");
//
//	//��������
//	destroy_LinkList(pHeader);
//	pHeader = NULL;
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}