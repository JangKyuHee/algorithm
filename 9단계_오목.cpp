#include<iostream>
using namespace std;
int Right(int(*a)[20], int pan, int cnt, int x, int y, int i, int j);
int Down(int(*a)[20], int pan, int cnt, int x, int y, int i, int j);
int UpDae(int(*a)[20], int pan, int cnt, int x, int y, int i, int j);
int DownDae(int(*a)[20], int pan, int cnt, int x, int y, int i, int j);
int main()
{
	int pan = 0;
	int x = 0, y = 0;
	int a[20][20] = { 0, };
	int cnt = 0;

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int j = 1; j <= 19; j++)
	{
		for (int i = 1; i <= 19; i++)
		{
	
			if (a[i][j] == 1)
			{
				pan = 1;
				x = j; y = i;
				cnt = 1;
				cnt = Right(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;

				cnt = Down(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;

				cnt = UpDae(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;

				cnt = DownDae(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;
			 }
			if (a[i][j] == 2)
			{
				pan = 2;
				x = j; y = i;
				cnt = 1;
				cnt = Right(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;

				cnt = Down(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;

				cnt = UpDae(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;

				cnt = DownDae(a, pan, cnt, x, y, i, j);
				if (cnt == 5)
					break;
				cnt = 1;
			}


			if (cnt == 5)
				break;

		}
		if (cnt == 5)
			break;
	}
	if(cnt!= 5)printf("0");

}

int Right(int(*a)[20], int pan, int cnt, int x, int y, int i, int j)
{
	if (i == 19)
		return cnt;
	if (a[i+1][j] == pan)
	{
		i++;
		cnt++;
		if (cnt == 5)
		{
			printf("%d\n", pan);
			printf("%d %d",y, x);
			return cnt;
		}
		cnt = Right(a, pan, cnt, x, y, i, j);
	}
}
int Down(int(*a)[20], int pan, int cnt, int x, int y, int i, int j)
{
	if (j == 19)
		return cnt;
	if (a[i][j+1] == pan)
	{
		j++;
		cnt++;
		if (cnt == 5)
		{
			printf("%d\n", pan);
			printf("%d %d",y,x);
			return cnt;
		}
		cnt = Down(a, pan, cnt, x, y, i, j);
	}
	
}
int UpDae(int(*a)[20], int pan, int cnt, int x, int y, int i, int j)
{
	if (i == 19)
		return cnt;
	if (j == 1)
		return cnt;
	if (a[i+1][j-1] == pan)
	{
		i++;
		j--;
		cnt++;
		if (cnt == 5)
		{
			printf("%d\n", pan);
			printf("%d %d",y,x);
			return cnt;
		}
		cnt = UpDae(a, pan, cnt, x, y, i, j);
	}
}
int DownDae(int(*a)[20], int pan, int cnt, int x, int y, int i, int j)
{
	if (j == 19)
		return cnt;
	if (i == 19)
		return cnt;
	if (a[i + 1][j + 1] == pan)
	{
		i++;
		j++;
		cnt++;
		if (cnt == 5)
		{
			printf("%d\n", pan);
			printf("%d %d",y,x);
			return cnt;
		}
		cnt = DownDae(a, pan, cnt, x, y, i, j);
	}
	
}