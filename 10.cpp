//#include "10-path.hpp"
//
//int main()
//{
//	//定义一个图的对象
//	Graph g;
//	//用邻接矩阵创建图
//	createGraph(g);
//	//打印
//	printGraph(g);
//
//	//深度优先搜索
//	cout << "深度优先搜索" << endl;
//	DFS(g);
//	cout << endl;
//
//	//广度优先搜索
//	cout << "广度优先搜索" << endl;
//	BFS(g);
//	cout << endl;
//
//	cout << "迪杰斯特拉(Dijkstra)算法" << endl;
//	// path数组 - 到当前点的最近的邻接点
//	int path[50];
//	// dist[] 数组 - 从出发点到各个点的最短距离
//	int dist[50];
//	// 出发点
//	int v0 = 0;
//	dijkstraPath(g, path, dist, v0);
//	// A->D怎么走?多么长?
//	// dist[3] = A->D的最短距离
//	// path[3]
//	for (int i = 1; i < g.vertexNum; ++i)
//	{
//		cout << "路径: ";
//		showPath(g, path, v0, i);
//		cout << "路径长度: " << dist[i] << endl;
//	}
//
//	cout << "Keyboard not found, press F1 to continue..." << endl;
//	system("pause");
//	return 0;
//}