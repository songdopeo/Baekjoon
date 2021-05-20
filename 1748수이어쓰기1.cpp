#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	
	int num;

	cin >> num;

	int len = 1;
	int start, end;

	long long answer=0;

	for (start=1, len; start <= num; len++,start*=10)
	{
		end = (start * 10) - 1;
		if (end > num)
		{
			end = num;
		}

		answer += (end - start + 1) * len;

	}

	cout << answer << '\n';
	return 0;


}