#include <iostream>
#include <vector>

using namespace std;

bool broken[10];

bool possible(int n)
{
	
	if (n == 0)
	{
		if (broken[0]) {
			return 0;
		}
		else
		{
			return 1;
		}
	}

	int len = 0;

	while (n>0) {
		
		if (broken[n % 10]) return 0;
		len += 1;
		n /= 10;
			
	}
	return len;
	
}

int main()
{

	int channel;//Ã¤³Î
	int number;
	cin >> channel >> number;

	for (int i = 0; i < number; i++)
	{
		int x;
		cin >> x;
		broken[x] = true;
	}

	int ans = channel - 100;
	if (ans < 0)
	{
		ans = -ans;
	}
	
	

	return 0;

}
