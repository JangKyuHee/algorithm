#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int> v[50];
queue<int> q;
int m, n;
int visit[50];
void DFS(int start);
void BFS(int start);
int main()
{ 
	int a, b;
	int start;
	scanf_s("%d %d", &m, &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}

	scanf_s("%d", &start);

	//DFS(start);
	BFS(start);

}


void DFS(int start)
{
	printf("%d-> ", start);
	visit[start] = 1;
	for (vector<int>::iterator it = v[start].begin(); it != v[start].end(); it++)
	{
		if (visit[*it] != 1)
		{
			DFS(*it);
		}
	}
}

void BFS(int start)
{
	printf("%d-> ", start);
	q.push(start);
	visit[start] = 1;

	while (!q.empty())
	{
		q.pop();
		for (vector<int>::iterator it = v[start].begin(); it != v[start].end(); it++)
		{
			if (visit[*it] != 1)
			{
				printf("%d-> ", *it);
				q.push(*it);
				visit[*it] = 1;

			}
		}
		
		if(!q.empty())
			start = q.front();
	}
	



}

/*
  5 6
  1 2
  1 3
  1 4
  3 4
  3 5
  4 5




*/