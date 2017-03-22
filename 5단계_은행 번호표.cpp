#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
	int N; //사람 수
	int ha; //필요없는 값
	int a[110][110]; //값을 넣을 배열
	int b[110][110]; //b[i][j]에서 i는 기다린 시간, j는 업무가 끝난시간
	int dap = 0; //답을 구할 수
	bool cnt = false; //기다리는 시간이 있는지 확인 용도
	
	scanf_s("%d", &N); //입력 받음
	

	for (int i = 0; i < N; i++)
	{
		scanf_s(" %d %d %d",&ha, &a[i][0], &a[i][1]); //ha는 의미없는 값, a[i][0] 는 도착시간, a[i][1] 은 기다린 시간
	}

	b[0][0] = 0; //수를 더할 배열 첫번째 값은 0으로
	b[0][1] = a[0][0] + a[0][1]; //첫번째 값은 미리 설정해줌(기다린 시간이 없으므로)

	for (int i = 1; i < N; i++)
	{
		if (a[i][0] >= b[i - 1][1]) //도착했을때 아무도 없으면
		{
			b[i][0] = 0; //대기시간은 0
			b[i][1] = a[i][1] + a[i][0];//업무 종료 시간은 도착시간 + 업무시간
		}
		else //도착시 누군가 있으면
		{
			b[i][0] = b[i - 1][1] - a[i][0]; //기다린 시간 = 전사람의 종료시간 - 나의 도착시간 
			b[i][1] = a[i][1] + b[i - 1][1]; //나의 업무 종료 시간 = 나의 업무 시간 + 전사람의 업무시간
		}
		
		
	}
	
	
	for (int i = 0; i < N; i++)
	{
		dap += b[i][0]; //모든 기다린 시간을 더함
	}
	printf("%.1f", (float)dap/N); //모든 기다린 시간을 더한 뒤 전체 사람수로 나눠줌


}