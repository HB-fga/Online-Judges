#include <stdio.h>

int main() {
	
	int c=1, s=0, n, x, y;
	scanf("%d", &n);
	
	while (c<=n)
	{
		c++;
		scanf("%d %d", &x, &y);
		if (x < y)
		{
			while (x<y - 1)
			{
				x++;
				if (x % 2 == 1)
				{
					s = s + x;
				}
			}
		}
		else
		{
			while (y<x - 1)
			{
				y++;
				if (y % 2 == 1)
				{
					s = s + y;
				}
			}
		}
		printf("%d\n", s);
		s = 0;
	}
	
	return 0;
}
