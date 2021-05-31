#include<iostream>

using namespace std;


int fun1(int a,int b,int m)
{
	int val = 1;
	while (b--) val *= a;
	return val % m;

}

int main()
{
	cout << fun1(3, 5, 4);
	


}