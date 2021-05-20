#include <iostream>

using namespace std;

int main()
{
	int t;
	int m, n;
	int x, y;

	cin >> t;

	while (t--)
	{
		cin >> m >> n >> x >> y;

		x -= 1;
		y -= 1;
		bool ok = false;

		for (int k=x; k <= m * n; k+=m)
		{
			if (k % n == y)
			{
				cout << k + 1 << '\n';
				ok = true;
				break;
			}

		}

		if (!ok)
		{
			cout << -1 << '\n';
		}



	}



}
