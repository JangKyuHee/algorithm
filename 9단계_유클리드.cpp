#include<iostream>
using namespace std;
int uklid(int a, int b);
int he = 0;
int c = 0;
int main() 
{
	int num_1, num_2 = 0;
	int choi;
	scanf_s("%d %d", &num_1, &num_2);
	choi = uklid(num_1, num_2);
	printf("%d %d", choi, choi * (num_1 / choi) * (num_2 / choi));
}
int uklid(int a, int b)
{
	if (b > a){
		he = b;
		b = a;
		a = he;}
	c = a%b;
	if (c == 0){
		return b;}
	else{
		a = c;
		uklid(a, b);}}

