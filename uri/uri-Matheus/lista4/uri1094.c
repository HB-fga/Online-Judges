#include <stdio.h>

int main() {
	
	char a;
	double c=1, n=0, t=0, x=0, co=0, ra=0, sa=0;
	double dc, dr, ds;
	scanf("%lf", &n);
	
	
	
	while (c<=n)
	{
		scanf("%lf %c", &x, &a);
		if (a == 'C')
		{
			co = co + x;
		}
		else if (a == 'R')
		{
			ra = ra + x;
		}
		else if (a == 'S')
		{
			sa = sa + x;
		}
		t = co + ra + sa;
		dc = co/(t / 100);
		dr = ra/(t / 100);
		ds = sa/(t / 100);
		c++;
	}
	printf("Total: %.0lf cobaias\n", t);
	printf("Total de coelhos: %.0lf\n", co);
	printf("Total de ratos: %.0lf\n", ra);
	printf("Total de sapos: %.0lf\n", sa);
	printf("Percentual de coelhos: %.2lf %\n", dc);
	printf("Percentual de ratos: %.2lf %\n", dr);
	printf("Percentual de sapos: %.2lf %\n", ds);
		
	return 0;
}
