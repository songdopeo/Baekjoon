#include<iostream>

using namespace std;

int main()
{
	int x, y;
	int g, m;

	cin >> x >> y;

	g = 1;
	//�ִ�����
	for (int i = 2; i <= min(x, y); i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			g = i;
		}

	}

	//�ּҰ����
	m = g * (x / g) * (y / g);

	cout << g << '\n' << m;


}