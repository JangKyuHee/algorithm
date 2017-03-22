#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v[11];
int visit[11];
void DFS(int start);
int main()
{
	FILE *fi;
	fi = stdin;
	int N, start;

	int a, b;
	scanf_s("%d%d", &N, &start);

	while (fscanf_s(fi,"...")!=EOF)
	{
		
		
			scanf_s("%d %d", &a, &b);
			v[a].push_back(b);
			v[b].push_back(a);
		
	}

	for (int i = 1; i <= N; i++)
	{
		sort(v[i].begin(), v[i].end());
	}


	DFS(start);
}


void DFS(int start)
{
	printf("%d ", start);
	visit[start] = 1;

	for (vector<int>::iterator it = v[start].begin(); it != v[start].end(); it++)
	{
		if (visit[*it] == 0)
		{
			DFS(*it);

		}

	}



}