//#include "11-binary _sort_tree.hpp"
//
////���������������Լ�����
//void test01()
//{
//	PNode root = NULL;
//	KeyType nodeArray[11] = { 15, 6, 18, 3, 7, 17, 20, 2, 4, 13, 9 };
//
//	//�������������
//	cout << "���ڴ������������..." << endl;
//	createBST(&root, nodeArray, 11);
//	cout << "����������������!!!" << endl << endl;
//
//	//�������������
//	cout << "����������������(��������):" << endl;
//	inorderTraversalBST(root);
//	cout << endl << endl;
//
//	//����ָ���Ľڵ㣬�Ͳ����������
//	cout << "�����������������:" << endl;
//	PNode node = searchBST(root, 17);
//	if (node != NULL)
//	{
//		cout << "�ҵ�ָ���ڵ�: " << node->key << endl;
//	}
//	else
//	{
//		cout << "û���ҵ�ָ���Ľڵ�!!!" << endl;
//	}
//	cout << endl;
//
//	//������С�ڵ�
//	PNode minNode = searchMinBST(root);
//	if (minNode != NULL)
//	{
//		cout << "�ҵ���Сֵ: " << minNode->key << endl;
//	}
//	else
//	{
//		cout << "�����Ϊ����!!!" << endl;
//	}
//	cout << endl;
//
//	//�������ڵ�
//	PNode maxNode = searchMaxBST(root);
//	if (maxNode != NULL)
//	{
//		cout << "�ҵ����ֵ: " << maxNode->key << endl;
//	}
//	else
//	{
//		cout << "�����Ϊ����!!!" << endl;
//	}
//	cout << endl;
//
//	//ɾ��ָ���ڵ�
//	bool bl = deleteBST(&root, 18);
//	if (bl)
//	{
//		cout << "ɾ���ڵ�ɹ�!!!" << endl;
//	}
//	else
//	{
//		cout << "ɾ���ڵ�ʧ��!!!" << endl;
//	}
//	//�������������
//	cout << "����������������(��������):" << endl;
//	inorderTraversalBST(root);
//	cout << endl << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}