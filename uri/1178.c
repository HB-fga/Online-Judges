#include <stdio.h>

int main() {
	
	double x;
	double a[100];
	
	scanf("%lf", &x);
	
	for (int i=0;i<100;i++)
	{
		a[i]=x;
		printf("N[%d] = %.4lf\n", i, a[i]);
		x/=2;
	}
	
	return 0;
}
