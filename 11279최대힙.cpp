#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int> pq;
	int n;

	cin >> n;
	int temp;

	while (n--)
	{
		cin >> temp;

		if (pq.empty() == 1 && temp == 0) cout << 0 << '\n';

		else if (pq.empty() != 1 && temp == 0) {

			cout << pq.top() << '\n';
			pq.pop();

		}

		else {

			pq.push(temp);

		}

	}

	return 0;

}