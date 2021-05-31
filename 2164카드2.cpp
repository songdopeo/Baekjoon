#include<bits/stdc++.h>	

using namespace std;

int main()
{
	int n;
	queue<int> card;


	cin >> n;

	for (int i = 0; i < n; i++)
	{
		card.push(i + 1);

	}

	//cout << card.size() << '\n';

	while (card.size()!=1)
	{
		int temp = 0;
		card.pop();

		temp = card.front();
		card.pop();
		card.push(temp);

	

	}
	cout << card.front() << ' ';


}