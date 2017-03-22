#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int cnt = 0;
	int cnt3 = 0;
	char cnt2[10];
	for (int i = 0; i < 30; i++)
	{
		scanf_s("%d", &cnt);
		scanf_s("%[^\n]s", cnt2, 10);

		if (strcmp(cnt2, "too high") == 0)
		{
			for (int j = cnt-1; j <= 9; j++)
			{
				a[j] = 0;
			}
			cnt2 [2] = 'd';
		}

		else if (strcmp(cnt2, "too low") == 0)
		{
			for (int j = 0; j <= cnt-1; j++)
			{
				a[j] = 0;
			}
			cnt2[2] = 'd';

		}


		else if (strcmp(cnt2, "right on") == 0)
		{
			break;
		}
	}


		if (a[cnt-1] == cnt)
		{
			cnt3 = 1;
		}

		

	if (cnt3 == 1)
		printf("Stan may be honest");
	else
		printf("Stan is dishonest");


}