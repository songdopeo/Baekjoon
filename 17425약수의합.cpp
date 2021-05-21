#include<iostream>
#include<vector>

using namespace std;



int main()
{
	int n;
	
	cin >> n;

	long long answer = 0;


	for (int i = 0; i < n; i++)
	{
			answer += ( n / (i+1)) * (i+1);		
		
	}

	cout << answer << endl;

	return 0;

}