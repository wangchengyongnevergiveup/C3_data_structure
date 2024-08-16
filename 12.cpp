#include "12-balanced_binary_tree.hpp"

int main()
{
	int i, nArr[] = { 4, 5, 7, 2, 1, 3, 6 };
	PBSTree root = NULL, pos;
	bool taller;
	for (i = 0; i < sizeof(nArr) / sizeof(int); i++)
	{
		InsertAVL(&root, nArr[i], &taller);
	}
	InorderTra(root);
	cout << endl << "start find 103 ..." << endl;
	if (FindNode(root, 103, &pos))
	{
		cout << "Find this Node " << pos->data << endl;
	}
	else
	{
		cout << "Not find this Node¡£" << endl;
	}

	cout << endl << "start find 7 ..." << endl;
	if (FindNode(root, 7, &pos))
	{
		cout << "Find this Node " << pos->data << endl;
	}
	else
	{
		cout << "Not find this Node" << endl;;
	}

	system("pause");
	return 0;
}
