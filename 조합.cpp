#include <iostream>
#include <vector>

using namespace std;

void combination(vector<int> arr, vector<int> comb, int index, int depth)
{
	if (depth == comb.size()) {
		for (int i = 0; i < comb.size(); i++)
			cout << comb[i] << ' ';
		cout << endl;

		return;
	}
	else {

		for (int i = index; i < arr.size(); i++) {

			comb[depth] = arr[i];
			combination(arr, comb, i + 1, depth + 1);

		}

	}


}

int main()
{
	int N, M;

	cin >> N >> M;

	vector<int> vec(N);
	for (int i = 0; i < N; i++) {

		vec[i] = i + 1;

	}

	vector<int> comb(M);

	combination(vec, comb, 0, 0);




}