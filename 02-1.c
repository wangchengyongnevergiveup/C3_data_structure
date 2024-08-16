//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include "02-linkList1.h"
//
//void test1()
//{
//	//初始化链表
//	struct LinkNode* pHeader = initLinkList();
//
//	//遍历链表
//	printf("遍历链表结果为：\n");
//	foreach_LinkList(pHeader);// 1 4 5 7
//
//	//插入链表 new插在old前面 如果没有对应old，则插到末尾
//	insert_LinkList(pHeader, 4, 2);
//	insert_LinkList(pHeader, 4, 3);
//	insert_LinkList(pHeader, -1, 8);
//	insert_LinkList(pHeader, 7, 6);
//	printf("插入链表后，遍历链表结果为：\n");
//	foreach_LinkList(pHeader);// 1 2 3 4 5 6 7 8
//
//	//返回链表节点个数
//	printf("当前链表节点个数结果为：%d\n", size_LinkList(pHeader));//8
//
//	//反转链表
//	reverse_LinkList(pHeader);
//	printf("反转链表结果为：\n");
//	foreach_LinkList(pHeader);// 8 7 6 5 4 3 2 1
//
//	//删除链表
//	delete_LinkList(pHeader, 2);
//	delete_LinkList(pHeader, 3);
//	delete_LinkList(pHeader, 4);
//	delete_LinkList(pHeader, -1);
//	printf("删除链表后，遍历链表结果为：\n");
//	foreach_LinkList(pHeader);// 8 7 6 5 1
//
//	//清空链表
//	clear_LinkList(pHeader);
//	printf("清空链表后，遍历链表结果为：\n");
//
//	//销毁链表
//	destroy_LinkList(pHeader);
//	pHeader = NULL;
//}
//
//int main() 
//{
//	test1();
//	return 0;
//}