#include<iostream>
#include<stdio.h>

using namespace std;

void get(int a);
int cnt = 0;

int main()
{
	int input;
	scanf_s("%d", &input);

	get(input);

	printf("%d", cnt);

}


void get(int a)
{
	int b = a;

	if (a - 1 >= 0)
	{
		
		a -= 1;
		if (a == 0)
		{
			
			cnt++;
		}
		else
			get(a);
	}
	a = b;
	if (a - 2 >= 0)
	{
		
		a -= 2;
		if (a == 0)
		{
		
			cnt++;
		}
		else
			get(a);
	}

}
