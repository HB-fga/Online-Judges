#include <stdio.h>

int main() {
	
	int n, x, y, c=0;
	
	scanf("%d",&n);
	
	for(;n>0;n--)
	{
		scanf("%d %d",&x,&y);
		
		for (;y>0;)
		{
			if (x%2!=0)
			{
				c += x;
				y--;
			}
			x++;
		}
		
		printf("%d\n",c);
		c=0;
	}
	
	return 0;
}
