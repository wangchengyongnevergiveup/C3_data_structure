//#include "06-binary_tree.h"
//
////求叶子数量
//void calculateLeafNum(struct BinaryNode* root, int* p)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//如果节点 左子树 与右子树 同时为空  称为叶子
//	if (root->lChild == NULL && root->rChild == NULL)
//	{
//		(*p)++;
//	}
//	calculateLeafNum(root->lChild, p);
//	calculateLeafNum(root->rChild, p);
//}
//
////获取树高度
//int getTreeHeight(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	//获取左子树高度 
//	int  lHeight = getTreeHeight(root->lChild);
//	//获取右子树高度
//	int  rHeight = getTreeHeight(root->rChild);
//	//从左子树和右子树中取大的值+1
//	int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1;
//	return height;
//}
//
////拷贝二叉树
//struct BinaryNode* copyTree(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	//先拷贝左子树
//	struct BinaryNode* lChild = copyTree(root->lChild);
//	//再拷贝右子树
//	struct BinaryNode* rChild = copyTree(root->rChild);
//	struct BinaryNode* newNode = malloc(sizeof(struct BinaryNode));
//	newNode->ch = root->ch;
//	newNode->lChild = lChild;
//	newNode->rChild = rChild;
//	return newNode;
//}
//
////先序遍历
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
////释放二叉树
//void freeTree(struct BinaryNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//先释放左子树
//	freeTree(root->lChild);
//	//再释放右子树
//	freeTree(root->rChild);
//	//释放根
//	printf("%c被释放了\n", root->ch);
//	free(root);
//}