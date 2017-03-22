#include <iostream>
using namespace std;

int zegop(int a, int cnt);
int main(void )
{
	int a = 0;
	int cnt = 0;


	scanf_s("%d %d", &a, &cnt);
	int c = 0;


	c = zegop(a,cnt);

	printf("%d", c);


}

int zegop(int a, int cnt)
{
	static int d = 1;
	d = d * a;
	cnt--;
	if (cnt == 0)
		return d;
	
	zegop(a, cnt);


}