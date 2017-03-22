#include<iostream>
#include<queue>
using namespace std;
int visit[100001];
queue<int> q;
int N, K;
void visi(int from, int to);
void visi(int from, int to)
{
	if (!visit[to])
	{
		visit[to] = visit[from] + 1;
		q.push(to);
	}
}
int main()
{
	scanf_s("%d %d", &N, &K);
	if (N > K)
		printf("%d", N - K);
	else if (N == K)
		printf("0");
	else
	{
		q.push(N);

		while (N != K)
		{
			N = q.front();
			q.pop();

			if (N > 0)
				visi(N, N - 1);

			if (N < 100000)
				visi(N, N + 1);

			if (N > 0 && N*2<100000)
				visi(N, 2 * N);
		}
		printf("%d", visit[K]);
	}


}