#include <stdio.h>

int main() {
	
	int c=1, n, x;
	scanf("%d", &n);
	
	while (c <= n)
	{
		c++;
		scanf("%d", &x);
		if (x == 0)
		{
			printf("NULL\n");
		}
		else if ((x % 2 == 0) && (x > 0))
		{
			printf("EVEN POSITIVE\n");
		}
		else if ((x % 2 == 0) && (x < 0))
		{
			printf("EVEN NEGATIVE\n");
		}
		else if ((x % 2 != 0) && (x > 0))
		{
			printf("ODD POSITIVE\n");
		}
		else if ((x % 2 != 0) && (x < 0))
		{
			printf("ODD NEGATIVE\n");
		}
	}
	
	return 0;
}
