#include <iostream>

using namespace std;

int main()
{
	int E,S,M;
	cin >> E >> S >> M;

	int year = 1;

	int e, s, m;

	e = 1;
	s = 1;
	m = 1;

	for (year = 1; ; year++)
	{

		if (e == E && s == S && m == M)
		{
			cout << year << '\n';
			break;
		}

		e++;
		s++;
		m++;

		if (e == 16)e = 1;
		if (s == 29)s = 1;
		if (m == 20)m = 1;



		

	}

	return 0;

}
