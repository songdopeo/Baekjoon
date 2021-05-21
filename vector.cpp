#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<int> solution(vector<int> arr)
{

	vector<int> answer; 
	int min, i;
	int minindex;
	min = 999999;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minindex = i;

		}
	}

	for (int i = 0; i < arr.size(); i++)
	{
		if (i == minindex)
			continue;

		answer.push_back(arr[i]);
	}

	if (answer.size() == 0)
	{
		answer.push_back(-1);
		return answer;
	}
	else 
	{
		return answer;
	}



}