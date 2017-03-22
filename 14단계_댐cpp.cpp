#include<iostream>
#include<queue>

using namespace std;
int map[101][101];
queue<int> X_q;
queue<int> Y_q;
queue<int> cntt;
int main()
{
	int N = 0;
	int X = 0;
	int Y = 0;
	int turn = 0;
	int cnt3 = 0;
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			scanf_s("%d", &map[i][j]);
		}
	}
	int cnt = 1;
	scanf_s("%d %d", &Y, &X);
	scanf_s("%d", &turn);
	map[X][Y] = 1;
	X_q.push(X);
	Y_q.push(Y);
	cntt.push(1);
	map[X][Y] = 1;
	while (cnt< turn+2)
	{
		if (X_q.empty() == true)
			break;
		X = X_q.front();
		Y = Y_q.front();
		cnt = cntt.front();
		X_q.pop();
		Y_q.pop();
		cntt.pop();
		if (X - 1 >= 1 && map[X - 1][Y] == 0  )
		{
			X_q.push(X - 1);
			Y_q.push(Y);
			cntt.push(cnt+1);
			map[X - 1][Y] = cnt+1;
			if (map[X-1][Y] == turn + 1)
				cnt3++;
		}
		if (X + 1 <= N && map[X + 1][Y] == 0 )
		{
			X_q.push(X + 1);
			Y_q.push(Y);
			cntt.push(cnt+1);
			map[X + 1][Y] = cnt+1;
			if (map[X+1][Y] == turn + 1)
				cnt3++;
		}
		if (Y - 1 >= 1 && map[X][Y - 1] == 0 )
		{
			X_q.push(X);
			Y_q.push(Y - 1);
			cntt.push(cnt+1);
			map[X][Y - 1] = cnt+1;
			if (map[X][Y - 1] == turn + 1)
				cnt3++;
		}
		if (Y + 1 <= N && map[X][Y + 1] == 0 )
		{
			X_q.push(X);
			Y_q.push(Y + 1);
			cntt.push(cnt+1);
			map[X][Y + 1] = cnt+1;
			if (map[X][Y +1] == turn + 1)
				cnt3++;
		}
	}

	if (cnt3 == 0)
		printf("OH, MY GOD");

	else
	 printf("%d", cnt3);

}