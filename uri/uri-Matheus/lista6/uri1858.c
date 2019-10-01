#include <stdio.h>

int main() {
	
	int i, c=1, x, x1, a=1;
	
	scanf("%d", &i);
	scanf("%d", &x);
	x1 = x;
	
	while (c<i)
	{
		scanf("%d", &x);
		if (x<x1)
		{
			x1=x;
			a=c+1;
		}
		c++;
	}
	printf("%d\n", a);
	
	return 0;
}
