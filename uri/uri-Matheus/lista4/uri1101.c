#include <stdio.h>

int main() {
	
	int x=1, y=1, z=0;
	
	while ((x > 0) && (y > 0))
	{
		scanf("%d %d", &x, &y);
		if (x <= 0 || y <= 0)
		{
		
		}
		else if (x == y)
		{
			printf("%d Sum=%d\n", x, y);
		}
		else if (x < y)
		{
			while (x < y + 1)
			{
				printf("%d ", x);
				z = z + x;
				x++;
			}
			printf("Sum=%d\n", z);
			z = 0;
		}
		else if (x > y)
		{
			while (x + 1 > y)
			{
				printf("%d ", y);
				z = z + y;
				y++;
			}
			printf("Sum=%d\n", z);
			z = 0;
		}
	}
	
	return 0;
}
