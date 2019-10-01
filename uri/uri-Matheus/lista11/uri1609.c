#include <stdio.h>

int main() {
	
	int n, b, comp;
	int b1[10010]={};
	long long int t;
	int r=0;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &b);
		r=b;
		
		for(int j=0;j<b;j++)
		{
			scanf("%lld", &t);
			b1[j]=t;
		}
		for(int j=0;j<b-1;j++)
		{
			comp=b1[j];
			for(int h=j+1;h<b;h++)
			{
				if(b1[h]==comp)
				{
					r--;
					break;
				}
			}
		}
		
		printf("%d\n", r);
		
		r=0;
		for(int j=0;j<10010;j++)
		{
			b1[j]=0;
		}
	}
	
	return 0;
}
