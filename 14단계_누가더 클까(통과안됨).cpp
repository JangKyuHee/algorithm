#include<stdio.h>
#include<iostream>

using namespace std;


int main()
{
	float a, b, c, d;
	float e;
	scanf_s("%f %f %f %f", &a, &b, &c, &d);
	
	e = (a + b + c + d) / 4;
	printf("%.2f", e);

}