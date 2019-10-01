#include <stdio.h>

int main() {
	
	int n, x=0;
	scanf("%d", &n);
	
	while (x<=10000)
	{
	x++;
	if (x%n==2)
	{
	printf("%d\n", x);
	}
	}
	
	return 0;
}
