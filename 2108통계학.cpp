#include<bits/stdc++.h>

using namespace std;

int main() {

	int n;
	int maxN, minN;

	maxN = -4000;
	minN = 4000;
	int maxVisit = 0;
	int curIdx = 0;
	int mode;

	cin >> n;

	vector<int> box(8001,0);

	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		box[a[i] + 4000]++;
		maxN = max(maxN, a[i]);
		minN = min(minN, a[i]);

	}


	//»ê¼úÆò±Õ
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];

	}
	cout << round(sum/n) << '\n';

	//Áß¾Ó°ª
	vector<int> b(n);
	b.assign(a.begin(), a.end());
	sort(b.begin(), b.end());
	cout << b[n / 2 ] << '\n';

	//ÃÖºó°ª
	for (int i = 0; i < 8001; i++)
	{
		if (box[i] > maxVisit)
		{
			maxVisit = box[i];
			curIdx = i;
			mode = i - 4000;

		}

	}

	for (int i = 0; i < 8001; i++)
	{
		if ((box[i] == maxVisit) && (curIdx < i))
		{
			mode = i - 4000;
			break;
		}

	}

	cout << mode << '\n';



	//¹üÀ§
	cout << b[n - 1] - b[0] << '\n';

		return 0;



}