#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int,int>& i, pair<int,int>& j) {
	
	if (i.first == j.first)
		return i.second > j.second;
	return i.first > j.first;
}

int main()
{
	int num;
	int rank = 1;
	pair<int, int> arr[50];
	cin >> num;
	for (int i = 0; i < num; i++)cin >> arr[i].first >> arr[i].second;


	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
				rank++;
		cout << rank << ' ';
		rank = 1;


	}



}


//
//int main()
//{
//
//	int n;
//	vector<pair<int, int>> person;
//	pair<int, int> temp;
//
//	cin >> n;
//
//	while (n--)
//	{
//		cin >> temp.first >> temp.second;
//
//		person.push_back(temp);
//
//
//	}
//
//	int rank=1;
//
//	sort(person.begin(), person.end(),compare);
//
//	cout << rank << ' ';
//
//	for (int i = 1; i < person.size(); i++) {
//
//		if (person[i-1].first > person[i].first && person[i-1].second > person[i].second)
//		{
//			rank += 1;
//
//		}
//		else rank
//
//		cout << rank << ' ';
//
//	}
//
//
//
//}