#include<iostream>
#include<stdio.h>

using namespace std;

int b[11];

void bindo(long long int a); //bindo�� üũ�ϴ� function

int main()
{
	long long int N, M; //input�� ũ�� ������ long long����
	scanf_s("%lld %lld", &N, &M); //��ǲ�� �޴´�

	for (int i = 0; i <= 9; i++) //���� �־��� �迭 �ʱ�ȭ
	{
		b[i] = 0;
	}

	for (long long int i = N; i <= M; i++) //N ���� M���� ���� Ȯ��
	{
		bindo(i);
	}


	for (int i = 0; i <= 9; i++)
	{
		printf("%d ", b[i]); //�� �־��� �ֵ��� ����Ѵ�

	}

}

void bindo(long long int a)
{
	long long int d;
	long long int i = 1; //i�� 1���� ����
	while (i <= a) // i�� input���� 10Ŭ������ ��� Ű���ش�
	{
		i = i * 10;

	}

	i = i / 10; //i�� input�� �ڸ����� ������

	for (long long int j = i; j >= 1; j = j / 10) //�ڸ����� �������鼭 ���ش�.
	{

		d = a / j;  //�ڸ����� �����Ƿ� �� ���� ���� ���� ����
		a = a - (d*j); //���������� �� ���� �ڸ��� �����ش�.

		for (int k = 0; k <= 9; k++)
		{
			if (k == d)//������ ������ �´� ���ڸ� ã�Ƽ�
			{
				b[k]++; //�迭�� �־��ش�.
				break;

			}
		}


	}



}