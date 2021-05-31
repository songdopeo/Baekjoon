//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//vector<int>	a[101];
//bool check[101];
//int cnt = 0;
//
//
//void bfs(int start) {
//
//	queue<int>	q;
//
//	check[start] = true;
//	q.push(start);
//
//	while (!q.empty())
//	{
//		int node = q.front();
//		//cout<<"qfront:" << q.front();
//		q.pop();
//
//		for (int i = 0; i < i<a[node].size(); i++) {
//
//			int next = a[node][i];
//			if (check[next] == false)
//			{
//				check[next] == true;
//				q.push(next);
//				cnt++;
//			}
//
//		}
//
//
//	}
//
//
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int u, v;
//		cin >> u >> v; 
//		a[u].push_back(v);
//		a[v].push_back(u);
//
//
//	}
//	/*
//	for (int i = 1; i <= n; i++)
//	{
//		sort(a[i].begin(), a[i].end());
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < a[i].size(); j++)
//			cout << a[i][j] << ' ';
//
//			cout << '\n';
//
//	}*/
//
//	bfs(1);
//	cout << cnt << '\n';
//	return 0;
//
//}

#include<iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, cnt;
vector<int> nodes[101];
queue<int> bfs;
bool visited[101];

int main(void) {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;

		cin >> a >> b;
		nodes[a].push_back(b);
		nodes[b].push_back(a);
	}
	visited[1] = true;
	bfs.push(1);
	while (!bfs.empty()) {
		int node = bfs.front();
		bfs.pop();

		for (int i = 0; i < nodes[node].size(); i++) {
			int j = nodes[node][i];
			if (visited[j] == false) {
				visited[j] = true;
				bfs.push(j);
			}
		}
	}
	for (int i = 1; i <= N; i++)
		if (visited[i] == true) cnt++;

	printf("%d", cnt - 1);
	return 0;
}