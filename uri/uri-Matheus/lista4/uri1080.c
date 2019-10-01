#include <stdio.h>

int main() {
	
	int c=1, h=0, p, x;
	
	while (c <= 10000)
	{
		scanf("%d", &x);
		if (x > h)
		{
		h = x;
		p = c;
		}
		c++;
	}
	printf("%d\n%d\n", h, p);
	
	return 0;
}
