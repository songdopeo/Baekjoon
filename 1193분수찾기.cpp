#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int index = 0;

	for (int i = 1;; i++)
	{
		if (n <= i * (i + 1) / 2) {
			index = i;
			break;
		}

	}

	int pos = 0;
	pos = n - ((index - 1) * (index) / 2);


	if (index % 2 == 0) {
		cout << pos << '/' << index - pos + 1;
	}
	else
		cout << index-pos+1 << '/' << pos;
//cout << index << ' '<< pos;


}