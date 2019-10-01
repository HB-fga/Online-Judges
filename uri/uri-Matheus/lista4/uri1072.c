#include <stdio.h>

int main() {
	
	int c=1, ci=0, co=0, n, x;
	scanf("%d", &n);
	
	while (c <=n)
	{
		c++;
		scanf("%d", &x);
		if ((x > 9) && (x < 21))
		{
			ci++;
		}
		else
		{
			co++;
		}
	}
	printf("%d in\n%d out\n", ci, co);
	
	return 0;
}
