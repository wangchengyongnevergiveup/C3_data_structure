//#include "04-queue2.h"
//
////���е���ʽ�洢
//struct Person
//{
//	void* node;
//	char name[64];
//	int age;
//};
//
//void test01()
//{
//	//��ʼ������
//	LinkQueue myQueue = init_LinkQueue();
//
//	//׼������
//	struct Person p1 = { NULL,"aaa", 10 };
//	struct Person p2 = { NULL,"bbb", 20 };
//	struct Person p3 = { NULL,"ccc", 30 };
//	struct Person p4 = { NULL,"ddd", 40 };
//
//	//���
//	push_LinkQueue(myQueue, &p1);
//	push_LinkQueue(myQueue, &p2);
//	push_LinkQueue(myQueue, &p3);
//	push_LinkQueue(myQueue, &p4);
//	printf("���д�СΪ��%d\n", size_LinkQueue(myQueue));
//
//	while (isEmpty_LinkQueue(myQueue) == 0)
//	{
//		//���ʶ�ͷ
//		struct Person* pFront = front_LinkQueue(myQueue);
//		printf("��ʽ�洢::��ͷԪ�� -- ������%s  ���䣺 %d\n", pFront->name, pFront->age);
//		//���ʶ�β
//		struct Person* pBack = back_LinkQueue(myQueue);
//		printf("��ʽ�洢::��βԪ�� -- ������%s  ���䣺 %d\n", pBack->name, pBack->age);
//		putchar('\n');
//		//����
//		pop_LinkQueue(myQueue);
//	}
//
//	printf("���д�СΪ��%d\n", size_LinkQueue(myQueue));
//
//	//���ٶ���
//	destroy_LinkQueue(myQueue);
//}
//
//int main() 
//{
//	test01();
//
//	system("pause");
//	return 0;
//}