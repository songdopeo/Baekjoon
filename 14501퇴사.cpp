 #include<bits/stdc++.h>

using namespace std;


int n;
int ans = 0;
int day;
int T[21];
int P[21];


void go(int day, int sum)
{
	if (day == n+1)
	{
		if (ans < sum)ans = sum;
		
		return;
	}
	if (day > n+1) {
		
		return;
	}
	go(day + 1, sum); //상담을 안한다.
	go(day + T[day],sum +  P[day]); //상담을 한다. 


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> T[i] >> P[i];
	}

	go(1, 0);

	cout << ans << '\n';

	return 0;

}