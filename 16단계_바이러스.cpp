#include<iostream>
#include<vector>
using namespace std;

vector<int> v[101];

void DFS(int start);

int visit[101];
int cnt = -1;

int main()
{
	int N , G = 0;
	scanf_s("%d", &N);

	scanf_s("%d", &G);

	for (int i = 1; i <= G; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}

	DFS(1);
	printf("%d", cnt);

}


void DFS(int start)
{
	cnt++;
	visit[start] = 1;
	
	for (vector<int>::iterator it = v[start].begin(); it != v[start].end(); it++)
	{
		if (visit[*it] != 1)
		{
			DFS(*it);
		}



	}




}