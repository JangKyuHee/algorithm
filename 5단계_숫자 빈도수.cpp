#include<iostream>
#include<stdio.h>

using namespace std;

int b[11];

void bindo(long long int a); //bindo를 체크하는 function

int main()
{
	long long int N, M; //input이 크기 때문에 long long형임
	scanf_s("%lld %lld", &N, &M); //인풋을 받는다

	for (int i = 0; i <= 9; i++) //값을 넣어줄 배열 초기화
	{
		b[i] = 0;
	}

	for (long long int i = N; i <= M; i++) //N 부터 M까지 값을 확인
	{
		bindo(i);
	}


	for (int i = 0; i <= 9; i++)
	{
		printf("%d ", b[i]); //값 넣어준 애들을 출력한다

	}

}

void bindo(long long int a)
{
	long long int d;
	long long int i = 1; //i는 1부터 시작
	while (i <= a) // i를 input보다 10클때까지 계속 키워준다
	{
		i = i * 10;

	}

	i = i / 10; //i와 input의 자리수를 맞춰줌

	for (long long int j = i; j >= 1; j = j / 10) //자리수를 내려가면서 빼준다.
	{

		d = a / j;  //자리수가 같으므로 맨 위의 숫자 추출 가능
		a = a - (d*j); //추출했으면 맨 위의 자리를 없애준다.

		for (int k = 0; k <= 9; k++)
		{
			if (k == d)//맨위의 숫자중 맞는 숫자를 찾아서
			{
				b[k]++; //배열에 넣어준다.
				break;

			}
		}


	}



}