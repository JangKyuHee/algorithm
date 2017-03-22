#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;
int main()
{
	int N;
	int cnt = 0;
	int hh = false;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &v[i]);
	}

	sort(v.begin(), v.end());



	for (int i = 2; i <= v[0]; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (v[j] / i == 0)
				hh = true;
		}

		if (hh == false)
		{
			cnt = i;
		}

		hh = true;

	}

	printf("%d", cnt);

}

