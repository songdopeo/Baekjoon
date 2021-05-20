#include<iostream>

using namespace std;

int main()
{
	int x, y;
	int g, m;

	cin >> x >> y;

	g = 1;
	//최대공약수
	for (int i = 2; i <= min(x, y); i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			g = i;
		}

	}

	//최소공배수
	m = g * (x / g) * (y / g);

	cout << g << '\n' << m;


}