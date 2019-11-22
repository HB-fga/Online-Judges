#include <stdio.h>

int main() {
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (((a>b) && (b<=c)) || ((a<b) && (b<c) && ((c-b)>=(b-a))) || ((a>b) && (b>c) && ((c-b)>(b-a))) || ((a==b) && (b<c)))
	{
	printf(":)\n");
	}
	else
	{
	printf(":(\n");
	}
	
	return 0;
}
