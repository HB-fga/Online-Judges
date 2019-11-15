#include <stdio.h>

int main() {
	
	int n, m;
	int qd[600][600];
	int f=0, k=0;
	
	while(1)
	{
		scanf("%d %d", &n, &m);
		if((n==0) && (m==0)){break;}
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d", &qd[i][j]);
			}
		}
		
		for(int i=0;i<n;i++)
		{
			f=0;
			for(int j=0;j<m;j++)
			{
				if(qd[j][i]==0)
				{
					f=1;
				}
			}
			if(f==0)
			{
				k=1;
			}
		}
		
		if(k==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		
		f=0;
		k=0;
	}
	
	return 0;
}
