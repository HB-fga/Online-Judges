#include <stdio.h>

int main() {
	
	double m[12][12];
	double r=0;
	int y=1;
	char x='x';
	
	scanf("%c", &x);
	
	for (int i=0;i<12;i++)
	{
		for (int j=0;j<12;j++)
		{
			scanf("%lf", &m[i][j]);
		}
	}
	
	for (int i=0;i<12;i++)
	{
		for (int j=y;j<12-y;j++)
		{
			r+=m[i][j];
		}
		y++;
	}
	
	if(x=='M')
	{
		r/=30;
	}
	
	printf("%.1lf\n", r);
	
	return 0;
}
