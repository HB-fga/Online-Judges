#include <stdio.h>
#include <math.h>

int main() {
	
	long long int m[30][30];
	int a[30]={};
	long long int pot, del, c, id;
	int n, t, count=0, count2=0;
	
	scanf("%d", &n);
	
	for (int d=0;d<n;d++)
	{
		scanf("%d", &t);
		for (int i=0;i<t;i++)
		{
			for (int j=0;j<t;j++)
			{
				scanf("%lld", &m[i][j]);
			}
		}
		
		printf("Quadrado da matriz #%d:\n", d+4);
		
		for (int i=0;i<t;i++)
		{
			for (int j=0;j<t;j++)
			{
				pot=m[i][j];
				m[i][j]=pot*pot;
				c=m[i][j];
				
				while(c!=0)
				{
					c/=10;
					count++;
				}
				if (count>a[j])
				{
					a[j]=count;
				}
				count=0;
			}
		}
		
		for (int i=0;i<t;i++)
		{
			for (int j=0;j<t;j++)
			{
				id=m[i][j];
				while(id!=0)
				{
					id/=10;
					count2++;
				}
				
				del=a[j]-count2;
				
				while(del>0)
				{
					printf(" ");
					del--;
				}
				count2=0;
				if (j==t-1)
				{
					printf("%lld", m[i][j]);
				}
				else
				{
					printf("%lld ", m[i][j]);
				}
			}
			printf("\n");
		}
		if(d!=n-1)
		{
			printf("\n");
		}
		
		for (int i=0;i<30;i++)
		{
			a[i]=0;
		}
	}
	
	return 0;
}
