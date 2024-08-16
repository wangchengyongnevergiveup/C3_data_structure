//#include "11-binary _sort_tree.hpp"
//
////创建二叉排序树以及遍历
//void test01()
//{
//	PNode root = NULL;
//	KeyType nodeArray[11] = { 15, 6, 18, 3, 7, 17, 20, 2, 4, 13, 9 };
//
//	//创建二叉查找树
//	cout << "正在创建二叉查找树..." << endl;
//	createBST(&root, nodeArray, 11);
//	cout << "二叉查找树创建完毕!!!" << endl << endl;
//
//	//遍历二叉查找树
//	cout << "中序遍历二叉查找树(升序排列):" << endl;
//	inorderTraversalBST(root);
//	cout << endl << endl;
//
//	//查找指定的节点，和插入过程类似
//	cout << "中序遍历二叉树查找:" << endl;
//	PNode node = searchBST(root, 17);
//	if (node != NULL)
//	{
//		cout << "找到指定节点: " << node->key << endl;
//	}
//	else
//	{
//		cout << "没有找到指定的节点!!!" << endl;
//	}
//	cout << endl;
//
//	//查找最小节点
//	PNode minNode = searchMinBST(root);
//	if (minNode != NULL)
//	{
//		cout << "找到最小值: " << minNode->key << endl;
//	}
//	else
//	{
//		cout << "这棵树为空树!!!" << endl;
//	}
//	cout << endl;
//
//	//查找最大节点
//	PNode maxNode = searchMaxBST(root);
//	if (maxNode != NULL)
//	{
//		cout << "找到最大值: " << maxNode->key << endl;
//	}
//	else
//	{
//		cout << "这棵树为空树!!!" << endl;
//	}
//	cout << endl;
//
//	//删除指定节点
//	bool bl = deleteBST(&root, 18);
//	if (bl)
//	{
//		cout << "删除节点成功!!!" << endl;
//	}
//	else
//	{
//		cout << "删除节点失败!!!" << endl;
//	}
//	//遍历二叉查找树
//	cout << "中序遍历二叉查找树(升序排列):" << endl;
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