#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	
	if(n == 1)
	{
	printf("Top 1\n");
	}
	else if(n < 4)
	{
	printf("Top 3\n");
	}
	else if(n < 6)
	{
	printf("Top 5\n");
	}
	else if(n < 11)
	{
	printf("Top 10\n");
	}
	else if(n < 26)
	{
	printf("Top 25\n");
	}
	else if(n < 51)
	{
	printf("Top 50\n");
	}
	else if(n < 101)
	{
	printf("Top 100\n");
	}

	return 0;
}
