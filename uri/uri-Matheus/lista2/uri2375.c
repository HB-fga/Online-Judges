#include <stdio.h>

int main() {
	
	int d, a, l, p;
	scanf("%d", &d);
	scanf("%d %d %d", &a, &l, &p);
	
	if ((a >= d) && (l >= d) && (p >= d))
	{
	printf("S\n");
	}
	else
	{
	printf("N\n");
	}
	
	return 0;
}
