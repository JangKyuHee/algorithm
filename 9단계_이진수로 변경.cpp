#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

vector<int> v;

void two(int N);
int main()
{
	int N; // This is input
	scanf_s("%d", &N);
	two(N); //Use function

	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		printf("%d", *it);

	}

}

void two(int N)
{
	if (N != 0) //if N is 0, function end
	{
		if (N % 2 == 1) 
		{
			v.push_back(1);
			N = N / 2;
		}
		else
		{
			v.push_back(0);
			N = N / 2;
		}

		if (N == 2)
		{
			N = 0;
			v.push_back(0);
			v.push_back(1);

		}
		else if (N == 1)
		{
			N = 0;
			v.push_back(1);
		}
		two(N);
	}
}