//#include "06-binary_tree.h"
//
//void test01()
//{
//	struct BinaryNode nodeA = { 'A', NULL, NULL };
//	struct BinaryNode nodeB = { 'B', NULL, NULL };
//	struct BinaryNode nodeC = { 'C', NULL, NULL };
//	struct BinaryNode nodeD = { 'D', NULL, NULL };
//	struct BinaryNode nodeE = { 'E', NULL, NULL };
//	struct BinaryNode nodeF = { 'F', NULL, NULL };
//	struct BinaryNode nodeG = { 'G', NULL, NULL };
//	struct BinaryNode nodeH = { 'H', NULL, NULL };
//
//	//������ϵ
//	nodeA.lChild = &nodeB;
//	nodeA.rChild = &nodeF;
//	nodeB.rChild = &nodeC;
//	nodeC.lChild = &nodeD;
//	nodeC.rChild = &nodeE;
//	nodeF.rChild = &nodeG;
//	nodeG.lChild = &nodeH;
//
//	//������� Ҷ������
//	int num = 0;
//	calculateLeafNum(&nodeA, &num);
//	printf("����Ҷ������Ϊ��%d\n", num);//3
//
//	//�����ĸ߶�/���
//	int height = getTreeHeight(&nodeA);
//	printf("���ĸ߶�Ϊ��%d\n", height);//4
//
//	//����������
//	struct BinaryNode* newTree = copyTree(&nodeA);
//
//	//�ݹ����
//	recursion(newTree);//A B C D E F G H
//	printf("\n");
//
//	//�ͷŶ�����
//	freeTree(newTree);
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