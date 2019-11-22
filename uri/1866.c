#include <stdio.h>

int main() {
	
	int n, x;
	
	scanf("%d", &n);
	
	while (n>0)
	{
		scanf("%d", &x);
		if (x%2==0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
		n--;
	}
	
	return 0;
}
