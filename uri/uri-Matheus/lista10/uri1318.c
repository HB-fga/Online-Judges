#include <stdio.h>

int main() {
	
	int M[22000]={};
	int m, n, x;
	int c=0;
	
	while(1)
	{
		scanf("%d %d", &n, &m);
		if((n==0) && (m==0)) {break;}
		
		for(int i=0;i<m;i++)
		{
			scanf("%d", &x);
			M[x]++;
			if(M[x]==2)
			{
				c++;
			}
		}
		
		printf("%d\n", c);
		for(int i=0;i<22000;i++)
		{
			M[i]=0;
		}
		c=0;
	}
	
	return 0;
}
