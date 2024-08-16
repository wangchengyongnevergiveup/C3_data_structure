//#include "02-linkList2.h"
//
//struct Person
//{
//	char name[64];
//	int age;
//};
//
//void myPrintPerson(void* data)
//{
//	struct Person* p = data;
//	printf("������%s  ���䣺%d\n", p->name, p->age);
//}
//
//int myComparePerson(void* data1, void* data2)
//{
//	struct Person* p1 = data1;
//	struct Person* p2 = data2;
//	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
//}
//
//void test01()
//{
//	//׼������
//	struct Person p1 = { "aaa", 10 };
//	struct Person p2 = { "bbb", 20 };
//	struct Person p3 = { "ccc", 30 };
//	struct Person p4 = { "ddd", 40 };
//	struct Person p5 = { "eee", 50 };
//	struct Person p6 = { "fff", 60 };
//
//	//��ʼ������
//	LinkList mylist = init_LinkList();
//	printf("������Ϊ��%d\n", size_LinkList(mylist));//0
//
//	//��������
//	insert_LinkList(mylist, 0, &p1);
//	insert_LinkList(mylist, 0, &p2);
//	insert_LinkList(mylist, 1, &p3);
//	insert_LinkList(mylist, 0, &p4);
//	insert_LinkList(mylist, -1, &p5);
//	insert_LinkList(mylist, 2, &p6);
//	//ddd bbb fff ccc aaa eee
//
//	//����
//	foreach_LinkList(mylist, myPrintPerson);
//	printf("������Ϊ��%d\n", size_LinkList(mylist));//6
//
//	//����ɾ�� 
//	removeByPos_LinkList(mylist, 2);
//	printf("------------------\n");
//	foreach_LinkList(mylist, myPrintPerson);
//	//ddd bbb ccc aaa eee 
//	printf("������Ϊ��%d\n", size_LinkList(mylist));//5
//
//	removeByValue_LinkList(mylist, &p1, myComparePerson);
//	printf("------------------\n");
//	foreach_LinkList(mylist, myPrintPerson);
//	//ddd bbb ccc eee
//	printf("������Ϊ��%d\n", size_LinkList(mylist));//4
//
//	//�������
//	clear_LinkList(mylist);
//	printf("������Ϊ��%d\n", size_LinkList(mylist));//0
//
//	//����
//	destroy_Linklist(mylist);
//	mylist = NULL;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}