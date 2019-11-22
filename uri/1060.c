#include <stdio.h>

int main() {
	
	int a, b, c, d, e, f;
	int x1, x2, x3, x4, x5, x6;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	
	if (a > 0)
	{
	x1 = 1;
	}
	else
	{
	x1 = 0;
	}
	
	if (b > 0)
	{
	x2 = 1;
	}
	else
	{
	x2 = 0;
	}
	
	if (c > 0)
	{
	x3 = 1;
	}
	else
	{
	x3 = 0;
	}
	
	if (d > 0)
	{
	x4 = 1;
	}
	else
	{
	x4 = 0;
	}
	
	if (e > 0)
	{
	x5 = 1;
	}
	else
	{
	x5 = 0;
	}
	
	if (f > 0)
	{
	x6 = 1;
	}
	else
	{
	x6 = 0;
	}
	
	int x = x1 + x2 + x3 + x4 + x5 + x6;
	printf("%d valores positivos\n", x);
	
	return 0;
}
