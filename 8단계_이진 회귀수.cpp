#include<iostream>
#include<stdio.h>
using namespace std;

void hui(int a);

int main()
{
	for (int i = 1; i <= 100000; i++)
	{
		hui(i);
	}


}

void hui(int a)
{

	if (a == 1)
	{
		printf("1");
		printf("\n");
		return;
	}

	int start = a;
	int b[100000];
	int cnt = 0;
	bool cnt2 = false;
	while (a >= 2)
	{
		b[cnt] = a - ((a / 2) * 2);
		cnt++;
		a = a / 2;
		if (a == 1)
		{
			b[cnt] = 1;
		}
	}
	if (cnt % 2 == 0)
	{
		int doumi = cnt;
		for (int i = 0; i <= (cnt / 2) -1 ; i++)
		{
			if (b[doumi] != b[i])
			{
				cnt2 = true;
				
			}

			if (cnt2 == true)
				break;
			doumi--;
		}
	}
	else
	{
		int doumi2 = cnt;
		for (int i = 0; i <= cnt / 2; i++)
		{
			if (b[doumi2] != b[i])
			{
				cnt2 = true;
				
			}
			if (cnt2 == true)
				break;
			doumi2--;
		}
	}
	if (cnt2 == false)
		printf("%d\n", start);

}