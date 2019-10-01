#include <stdio.h>

int main() {
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a < b) && (a < c))
	{
	printf("%d\n", a);
	}
	else if ((b < a) && (b < c))
	{
	printf("%d\n", b);
	}
	else
	{
	printf("%d\n", c);
	}
	if (((a > b) && (a < c)) || ((a < b) && (a > c)))
	{
	printf("%d\n", a);
	}
	else if (((b > a) && (b < c)) || ((b < a) && (b > c)))
	{
	printf("%d\n", b);
	}
	else
	{
	printf("%d\n", c);
	}
	if ((a > b) && (a > c))
	{
	printf("%d\n", a);
	}
	else if ((b > a) && (b > c))
	{
	printf("%d\n", b);
	}
	else
	{
	printf("%d\n", c);
	}
	
	printf("\n");
	
	printf("%d\n%d\n%d\n", a, b, c);
	
	return 0;
}
