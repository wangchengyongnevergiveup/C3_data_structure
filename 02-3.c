//#include "02-linkList3.h"
//
//struct Person
//{
//	void* node;
//	char name[64];
//	int age;
//};
//
//void myPrintPerson(void* data)
//{
//	struct Person* p = data;
//	printf("������ %s  ���䣺 %d \n", p->name, p->age);
//}
//
//void test01()
//{
//
//	//��������
//	struct Person p1 = { NULL,"aaa", 10 };
//	struct Person p2 = { NULL,"bbb", 20 };
//	struct Person p3 = { NULL,"ccc", 30 };
//	struct Person p4 = { NULL,"ddd", 40 };
//	struct Person p5 = { NULL,"eee", 50 };
//	struct Person p6 = { NULL,"fff", 60 };
//
//	//��ʼ������
//	LinkList mylist = init_LinkList();
//
//	//��������
//	insert_LinkList(mylist, 0, &p1);
//	insert_LinkList(mylist, 0, &p2);
//	insert_LinkList(mylist, 1, &p3);
//	insert_LinkList(mylist, 0, &p4);
//	insert_LinkList(mylist, -1, &p5);
//	insert_LinkList(mylist, 2, &p6);
//	
//	//����
//	foreach_LinkList(mylist, myPrintPerson);//ddd bbb fff ccc aaa eee
//
//	//����ɾ��
//	removeByPos_ListList(mylist, 4);
//	printf("-----------------------\n");
//	foreach_LinkList(mylist, myPrintPerson);//ddd bbb fff ccc eee
//	
//	//����
//	destroy_LinkList(mylist);
//	mylist = NULL;
//}
//	
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}