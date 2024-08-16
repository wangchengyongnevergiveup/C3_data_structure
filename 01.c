//#include "01-dynamicArray.h"
//
////����
//struct Person
//{
//	char name[64];
//	int age;
//};
//
//void myPrintPerson(void* data)
//{
//	struct Person* p = data;
//	printf("������ %s ���䣺%d\n", p->name, p->age);
//
//}
//
//int myComparePerson(void* data1, void* data2)
//{
//	struct Person* p1 = data1;
//	struct Person* p2 = data2;
//
//	return  strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
//}
//
//int main()
//{
//	//��ʼ����̬����
//	struct dynamicArray* array = init_DynamicArray(5);
//
//	//׼������
//	struct Person p1 = { "aaa", 10 };
//	struct Person p2 = { "bbb", 20 };
//	struct Person p3 = { "ccc", 30 };
//	struct Person p4 = { "ddd", 40 };
//	struct Person p5 = { "eee", 50 };
//	struct Person p6 = { "fff", 60 };
//
//	printf("��������ǰ�� ������%d  ��С��%d\n", array->m_capacity, array->m_size);// 5 0
//
//	//��������
//	insert_DynamicArray(array, 0, &p1);
//	insert_DynamicArray(array, 0, &p2);
//	insert_DynamicArray(array, 1, &p3);
//	insert_DynamicArray(array, 0, &p4);
//	insert_DynamicArray(array, -1, &p5);
//	insert_DynamicArray(array, 2, &p6);
//	//ddd bbb fff ccc aaa eee
//
//	//��������
//	foreach_DynamicArray(array, myPrintPerson);
//	printf("�������ݺ� ������%d  ��С��%d\n", array->m_capacity, array->m_size);//10 6
//
//	//����ɾ�� ��λ��ɾ��
//	removeByPos_DynamicArray(array, 2);
//	printf("---------------------\n");
//	foreach_DynamicArray(array, myPrintPerson);
//	//ddd bbb ccc aaa eee
//	printf("ɾ�����ݺ� ������%d  ��С��%d\n", array->m_capacity, array->m_size);//10 5
//
//	removeByValue_DynamicArray(array, &p1, myComparePerson);
//	printf("---------------------\n");
//	foreach_DynamicArray(array, myPrintPerson);
//	//ddd bbb ccc  eee
//	printf("ɾ�����ݺ� ������%d  ��С��%d\n", array->m_capacity, array->m_size);//10 4
//
//	//��̬����ȱ��
//	//array->pAddr = NULL;
//	//array->m_capacity = 0;
//	//array->m_size = 0;
//
//	//��������
//	destroy_DynamicArray(array);
//	array = NULL;
//
//	system("pause");
//	return EXIT_SUCCESS;
//}