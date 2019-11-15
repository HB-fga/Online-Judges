#include <stdio.h>

int main() {
	
	int n, e, c=0, pr=0, t=0;
	int f[110]={};
	char al[110][60];
	char au[110][500];
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &e);
		
		for(int j=0;j<e;j++)
		{
			scanf(" %s", al[j]);
		}
		
		for(int j=0;j<e;j++)
		{
			scanf(" %s", au[j]);
		}
		
		for(int j=0;j<e;j++)
		{
			for(int h=0;au[j][h]!='\0';h++)
			{
				if(au[j][h]=='P')
				{
					pr++;
					c++;
				}
				else if(au[j][h]=='A')
				{
					c++;
				}
			}
			if((100/c)*pr<75)
			{
				f[j]=1;
				t++;
			}
			pr=0;
			c=0;
		}
		
		for(int j=0;j<e;j++)
		{
			if(f[j]==1)
			{
				if(t!=1)
				{
					printf("%s ", al[j]);
					t--;
				}
				else
				{
					printf("%s", al[j]);
					t--;
				}
			}
		}
		printf("\n");
		
		pr=0;
		c=0;
		t=0;
		for(int j=0;j<110;j++)
		{
			f[j]=0;
		}
	}
	
	return 0;
}
