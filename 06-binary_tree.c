//#include "06-binary_tree.h"
//
////��Ҷ������
//void calculateLeafNum(struct BinaryNode* root, int* p)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//����ڵ� ������ �������� ͬʱΪ��  ��ΪҶ��
//	if (root->lChild == NULL && root->rChild == NULL)
//	{
//		(*p)++;
//	}
//	calculateLeafNum(root->lChild, p);
//	calculateLeafNum(root->rChild, p);
//}
//
////��ȡ���߶�
//int getTreeHeight(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	//��ȡ�������߶� 
//	int  lHeight = getTreeHeight(root->lChild);
//	//��ȡ�������߶�
//	int  rHeight = getTreeHeight(root->rChild);
//	//������������������ȡ���ֵ+1
//	int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1;
//	return height;
//}
//
////����������
//struct BinaryNode* copyTree(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	//�ȿ���������
//	struct BinaryNode* lChild = copyTree(root->lChild);
//	//�ٿ���������
//	struct BinaryNode* rChild = copyTree(root->rChild);
//	struct BinaryNode* newNode = malloc(sizeof(struct BinaryNode));
//	newNode->ch = root->ch;
//	newNode->lChild = lChild;
//	newNode->rChild = rChild;
//	return newNode;
//}
//
////�������
//void recursion(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	printf("%c ", root->ch);
//	recursion(root->lChild);
//	recursion(root->rChild);
//}
//
////�ͷŶ�����
//void freeTree(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//���ͷ�������
//	freeTree(root->lChild);
//	//���ͷ�������
//	freeTree(root->rChild);
//	//�ͷŸ�
//	printf("%c���ͷ���\n", root->ch);
//	free(root);
//}