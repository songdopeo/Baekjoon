#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int temp;
	
	vector<pair<int,int>> index;

	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		index.push_back({ temp,i+1 });

		


	}

	sort(index.begin(), index.end());
	int sum = 0;
	int k = n;
	for (int i = 0; i < n; i++)
	{
	
		//cout << index[i].first << ' ' << index[i].second << '\n';

		sum += index[i].first * k;
			k--;

	}

	cout << sum << '\n';




}
