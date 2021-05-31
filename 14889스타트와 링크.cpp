#include<bits/stdc++.h>

using namespace std;

int box[20][20];
int n;

int go(int index, vector<int>& first, vector<int>& second)
{
	if (index == n) {
		 
		if (first.size() != n / 2)return -1;
		if (second.size() != n / 2) return -1;

		int t1 = 0;
		int t2 = 0;

		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n / 2; j++)
			{
				if (i == j)continue;
				t1 += box[first[i]][first[j]];
				t2 += box[second[i]][second[j]];
			}

		}
		int diff = t1 - t2;
		if (diff < 0) diff = -diff;
		return diff;
	}

	if (first.size() > n / 2) return -1;
	if (second.size() > n / 2)	return -1;
	int ans = -1;

	first.push_back(index);
	int t1 = go(index + 1, first, second);
	if (ans == -1 || (t1 != -1 && ans > t1))
	{
		ans = t1;
	}
	first.pop_back();

	second.push_back(index);
	int t2 = go(index + 1, first, second);
	if (ans == -1 || (t2 != -1 && ans > t2))
	{
		ans = t2;
	}
	second.pop_back();


	return ans;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> box[i][j];
		}

	}




}
