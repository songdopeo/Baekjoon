#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[9];
	int n = 9;
	
	
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}
	
	sort(a, a + n);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int sum = 0;
			for (int k = 0; k < n; k++)
			{
				if (i==k || j==k) continue;

				sum += a[k];
			}
			if (sum == 100)
			{
				for (int k = 0; k < n; k++)
				{
					if (k == i || k == j) continue;
					cout << a[k] << '\n';

				}
				
				return 0;

			}

		}


	}
	return 0;


}