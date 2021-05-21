#include<iostream>

using namespace std;

bool c[10];//입력이 되었으면 true 로 체크 
int a[10];

void go(int index, int n, int m)
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
		//c[i] = true;
		a[index] = i;
		go(index + 1, n, m);
		//c[i] = false;

	}


}

int main()
{

	int N, M;

	cin >> N >> M;

	go(0, N, M);


	return 0;


}