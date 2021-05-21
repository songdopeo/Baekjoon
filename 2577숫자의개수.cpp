#include<bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c;
	int mult;
	vector<int> d(10);

	cin >> a >> b >> c;
	mult = a * b * c;

	while(mult != 0)
	{

		d[mult % 10]++;
		mult /= 10;

	}

	for (int i = 0; i < 10; i++)
	{

		cout<<d[i]<<'\n';

	}

	return 0;

}