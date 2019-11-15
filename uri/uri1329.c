#include <stdio.h>

int main() {

	for (int n=1, m=0, j=0;n!=0;n=1, m=0, j=0)
	{
		scanf("%d",&n);
		
		if (n==0) {break;}
		
		for (int c=0;n>0;n--)
		{
			scanf("%d",&c);
			
			if (c == 1)
			{
				j++;
			}
			
			else
			{
				m++;
			}
		}
		printf("Mary won %d times and John won %d times\n", m, j);
	}
	
	return 0;
}
