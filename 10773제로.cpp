#include<bits/stdc++.h>	

using namespace std;


int main()
{
	stack<int> t;

	int n;
	cin >> n;
	int k;
	while (n--)
	{
		cin >> k;
		if (t.empty())
		{
			t.push(k);
		}
		else if (k == 0)
		{
			t.pop();
		}
		else
			t.push(k);

		//cout << "top:" << t.top() << '\n';

	}
	int sum = 0;
	
	while (!t.empty()) {
		sum += t.top();
		t.pop();

	}
	cout << sum;


}