#include <stdio.h>

int main() {
	
	int x, y;
	double c = 4.00;
	double s = 4.50;
	double b = 5.00;
	double t = 2.00;
	double r = 1.50;
	double V = 0.00;
	scanf("%d %d", &x, &y);
	
	if (x == 1)
	{
	V = c * y;
	}
	else if (x == 2)
	{
	V = s * y;
	}
	else if (x == 3)
	{
	V = b * y;
	}
	else if (x == 4)
	{
	V = t * y;
	}
	else if (x == 5)
	{
	V = r * y;
	}
	
	printf("Total: R$ %.2lf\n", V);
	
	return 0;
}
