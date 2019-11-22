#include <stdio.h>

int main() {
	
	int x;
	
	for (;;)
	{
		scanf("%d", &x);
		
		if (x == 0) {break;}
		
		printf("1");
		for (int n=1;n != x;)
		{
			n++;
			printf(" %d", n);
		}
		printf("\n");
	}
	
	
	return 0;
}
