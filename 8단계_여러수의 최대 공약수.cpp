#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;
int main()
{

	v.resize(100);
	int N = 0;
	int cnt = 0;
	bool hh = false;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &v[i]);
	}


	sort(&v[0], &v[N-1]);



	for (int i = 1; i <= v[0]; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (v[j] % i != 0)
				hh = true;
		}

		if (hh == false)
		{
			cnt = i;
		}

		hh = false;

	}

	printf("%d", cnt);

}