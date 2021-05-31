#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<pair<long, long>> arr;
	pair<long, long> tmp;

	for (int i = 0; i < num; i++)
	{
		cin >> tmp.second >> tmp.first;

		arr.push_back(tmp);

	}

	sort(arr.begin(), arr.end());
	for (int i = 0; i < num; i++)
		cout << arr[i].second << ' ' << arr[i].first << '\n';


}