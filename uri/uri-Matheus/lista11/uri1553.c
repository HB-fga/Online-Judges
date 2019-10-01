#include <stdio.h>

int main() {
	
	int n, x, y, r=0;
	int p[1010]={};
	
	while(1)
	{
		scanf("%d %d", &n, &x);
		if((n==0) && (x==0)){break;}
		
		for(int i=0;i<n;i++)
		{
			scanf("%d", &y);
			p[y]++;
		}
		
		for(int i=0;i<1010;i++)
		{
			if(p[i]>=x)
			{
				r++;
			}
			p[i]=0;
		}
		
		printf("%d\n", r);
		
		r=0;
	}
	
	return 0;
}
