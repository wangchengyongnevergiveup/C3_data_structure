//#include "03-stack2.h"
//
//struct Person
//{
//	void* node;
//	char name[64];
//	int age;
//};
//
//void test01()
//{
//	//��ʼ��ջ
//	SeqStack myStack = init_SeqStack();
//
//	//��������
//	struct Person p1 = { NULL, "aaa", 10 };
//	struct Person p2 = { NULL, "bbb", 20 };
//	struct Person p3 = { NULL, "ccc", 30 };
//	struct Person p4 = { NULL, "ddd", 40 };
//	struct Person p5 = { NULL, "eee", 50 };
//
//	//��ջ
//	push_SeqStack(myStack, &p1);
//	push_SeqStack(myStack, &p2);
//	push_SeqStack(myStack, &p3);
//	push_SeqStack(myStack, &p4);
//	push_SeqStack(myStack, &p5);
//
//	printf("��ʽ�洢-- ջ��Ԫ�ظ���Ϊ��%d\n", size_SeqStack(myStack));
//
//	while (isEmpty_SeqStack(myStack) == 0) //ջ��Ϊ�գ��鿴ջ��Ԫ�أ���ջ
//	{
//		struct Person* p = top_SeqStack(myStack);
//		printf("������%s ���䣺%d\n", p->name, p->age);
//
//		//��ջ
//		pop_SeqStack(myStack);
//	}
//
//	printf("��ʽ�洢-- ջ��Ԫ�ظ���Ϊ��%d\n", size_SeqStack(myStack));
//
//	//����ջ
//	destroy_SeqStack(myStack);
//}
//
//int main() 
//{
//	test01();
//
//	system("pause");
//	return 0;
//}