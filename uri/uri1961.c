#include <stdio.h>

int main() {
	
	int h=0, n=0, x=0, x0=0, d=0;
	
	scanf("%d %d", &h, &n);
	scanf("%d", &x);
	x0=x;
	
	while (n>1)
	{
		scanf("%d", &x);
		d = abs(x-x0);
		if (d>h)
		{
			printf("GAME OVER\n");
			n=8;
			break;
		}
		x0=x;
		n--;
	}
	if (n != 8)
	{
		printf("YOU WIN\n");
	}
	
	return 0;
}
