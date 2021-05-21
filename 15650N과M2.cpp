#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool c[10];//입력이 되었으면 true 로 체크 
int a[10];

void go(int index, int start, int n, int m)
{
	if (index == m)
	{

		for (int i = 0; i < m; i++)
		{
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;

	}


	for (int i = 1; i <= n; i++)
	{
		//if (c[i])continue;
		c[i] = true; a[index] = i;
		go(index + 1, i+1, n, m);
		c[i] = false;

	}


}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	go(0, 1, N, M);


	return 0;


}