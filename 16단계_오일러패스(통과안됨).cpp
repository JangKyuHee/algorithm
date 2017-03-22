#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int start;
stack<int> s1;
stack<int> s2;
vector<int> v[11000];
int N, G = 0;
int a = 0;
int main()
{
	int c;
	scanf_s("%d", &N);
	scanf_s("%d", &G);

	for (int i = 1; i <= G; i++)
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	start = 1;

	for (int i = 1; i <= N; i++)
	{
		sort(v[i].begin(), v[i].end());
	}

	s2.push(1);
	while (s1.size() != G+1)
	{
		if (s2.empty() == true)
			break;

		if (v[start].empty())
		{
			start = s2.top();
			s1.push(start);
	
			s2.pop();

		}
		else
		{
			for (vector<int>::iterator it = v[start].begin(); it != v[start].end(); it++)
			{

				a = *it;

				for (vector<int>::iterator it2 = v[a].begin(); it2 != v[a].end();)
				{
					if (start == *it2)
					{
						it2 = v[a].erase(it2);
						break;

					}
					else
						it2++;
				}
				it = v[start].erase(it);
				break;
			}
			start = a;
			s2.push(a);
		}
	}

	 if(s1.size() == G+1)
	{
		while(!s1.empty())
		{
			printf("%d ", s1.top());
			s1.pop();
		}
		
	}
	else
		printf("0");
	
	
}

