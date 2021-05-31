#include <bits/stdc++.h>

using namespace std;

vector<int> a[1001];
bool check[1001];
bool check1[1001];

void dfs(int node) {
	check[node] = true;
	cout << node << ' ';
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
	
		if (check[next] == false) {
			dfs(next);

		}

	}	
}

void bfs(int start) {

	queue<int>	q;

	check1[start] = true;
	q.push(start);
	while (!q.empty()) {

		int node = q.front();
		q.pop();
		cout << node << ' ';
		for (int i = 0; i < a[node].size(); i++) {

			int next = a[node][i];
			if (check1[next] == false) {
				check1[next] = true;
				q.push(next);

			}

		}
	}


}

int main()
{
	int n, m, start;
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);

	}
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}
	//cout << '\n';
	//for (int i = 1; i <= n; i++) {
	//	for (int j = 0; j < a[i].size(); j++)
	//	{
	//		cout << a[i][j] << ' ';
	//	}
	//	cout << '\n';
	//}


	dfs(start);
	cout << '\n';
	bfs(start);
	cout << '\n';
	return 0;



}