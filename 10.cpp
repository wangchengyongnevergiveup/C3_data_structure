//#include "10-path.hpp"
//
//int main()
//{
//	//����һ��ͼ�Ķ���
//	Graph g;
//	//���ڽӾ��󴴽�ͼ
//	createGraph(g);
//	//��ӡ
//	printGraph(g);
//
//	//�����������
//	cout << "�����������" << endl;
//	DFS(g);
//	cout << endl;
//
//	//�����������
//	cout << "�����������" << endl;
//	BFS(g);
//	cout << endl;
//
//	cout << "�Ͻ�˹����(Dijkstra)�㷨" << endl;
//	// path���� - ����ǰ���������ڽӵ�
//	int path[50];
//	// dist[] ���� - �ӳ����㵽���������̾���
//	int dist[50];
//	// ������
//	int v0 = 0;
//	dijkstraPath(g, path, dist, v0);
//	// A->D��ô��?��ô��?
//	// dist[3] = A->D����̾���
//	// path[3]
//	for (int i = 1; i < g.vertexNum; ++i)
//	{
//		cout << "·��: ";
//		showPath(g, path, v0, i);
//		cout << "·������: " << dist[i] << endl;
//	}
//
//	cout << "Keyboard not found, press F1 to continue..." << endl;
//	system("pause");
//	return 0;
//}