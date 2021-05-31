#include<bits/stdc++.h>

using namespace std;

int ans = 0;
int n;
char arr[51][51];

void check() {
	char c;
	for (int i = 0; i < n; i++) {//행계산

		int count = 1;
		c = arr[i][0];
		for (int j = 1; j < n; j++) {

			if ((arr[i][j] == c)) {
				count += 1;
			}
			else {
				count = 1;
				c = arr[i][j];
			}
			if (count > ans)ans = count;
		}

	}

	for (int j = 0; j < n; j++) {

		int count = 1;
		c = arr[0][j];
		for (int i = 1; i < n; i++)
		{
			if ((arr[i][j] == c)) {
				count += 1;
			}
			else {
				count = 1;
				c = arr[i][j];
			}
			if (count > ans)ans = count;


		}


	}


}

int main()
{

	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	//행검사
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			swap(arr[i][j], arr[i][j + 1]);
			check();
			swap(arr[i][j], arr[i][j + 1]);
		}

	}
	//열 검사
	for (int i = 0; i < n-1; i++) {

		for (int j = 0; j < n; j++) {

			swap(arr[i][j], arr[i + 1][j]);
			check();
			swap(arr[i][j], arr[i + 1][j]);

		}
	}

	cout << ans;


}