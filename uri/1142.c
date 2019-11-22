#include <stdio.h>

int main() {
	
	int n, c=1;
	
	scanf("%d",&n);
	
	for(;n > 0;n--)
	{
		printf("%d %d %d PUM\n", c, c+1, c+2);
		c += 4;
	}
	
	return 0;
}
