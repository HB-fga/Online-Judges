#include <stdio.h>

int main() {
	
	int a[1000];
	int x, c=0;
	
	scanf("%d", &x);
	
	for(int i=0;i<1000;i++)
	{
		if(c==x)
		{
			c=0;
		}
		a[i]=c;
		c++;
	}
	
	for(int i=0;i<1000;i++)
	{
		printf("N[%d] = %d\n", i, a[i]);
	}
	
	return 0;
}
