#include<bits/stdc++.h>

using namespace std;

bool desc(int a, int b)
{

	return a > b;

}

int main() {

	int data[10] = { 9,3,5,7,8,1,2,4,6,10 };

	sort(data, data + 10);
	
	sort(data, data + 10, desc);
	for (int i = 0; i < 10; i++) {

		cout << data[i] << ' ';
	}





}