#include<iostream>
using namespace std;


int main() {
	
	double P_1_X, P_1_Y = 0;
	double P_2_X, P_2_Y = 0;
	double gi=0, jum = 0;
	int cnt =0;
	double doumi = 0;
	double d = 0;
	double d_d = 0;
	scanf_s("%lf %lf", &P_1_X, &P_1_Y);
	scanf_s("%lf %lf", &P_2_X, &P_2_Y);

	if (P_1_X > P_2_X)
	{
		doumi = P_1_X;
		P_1_X = P_2_X;
		P_2_X = doumi;
		doumi = P_1_Y;
		P_1_Y = P_2_Y;
		P_2_Y = doumi;
	}
	if (P_1_X == P_2_X)
	{
		d = P_1_Y - P_2_Y;
		if (d < 0)
		{
			d = d * -1;
		}
		printf("%d", (int)d + 1);

	}
	else
	{
		gi = (P_1_Y - P_2_Y) / (P_1_X - P_2_X);
	    jum = P_1_Y - (gi * P_1_X);

		for (double i = P_1_X; i <= P_2_X; i++)
		{
			//printf("%f\n", ((gi * i) + jum) - (int)((gi*i) + jum));
			
			if (((gi * i) + jum) - (int)((gi*i) + jum) >= 0)
			{

				if (((gi * i) + jum) - (int)((gi*i) + jum) <0.00000001)
				{
					//printf("%f", ((gi * i) + jum) - ((int)((gi*i) + jum)));
					cnt++;
				}
			}
			else
			{
				if ((((gi * i) + jum) - (int)((gi*i) + jum) + 1)<0.00000001)
				{
					//printf("%f", ((gi * i) + jum) - ((int)((gi*i) + jum)));
					cnt++;
				}

			}
		}
		printf("%d", cnt);
	}
	


}
