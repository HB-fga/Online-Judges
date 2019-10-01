#include <stdio.h>
#include <math.h>

int main() {
	
	int m[120][120];
	int dx[4]={1, 0, 1, 0};
	int dy[4]={1, 1, 0, 0};
	int n, c=0;
	
	scanf("%d", &n);
	
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int z=0;z<4;z++)
			{
				if (m[i+dx[z]][j+dy[z]]==1)
				{
					c++;
				}
				
			}
			if(c>=2)
			{
				printf("S");
			}
			else
			{
				printf("U");
			}
			c=0;
		}
		printf("\n");
	}
	
	return 0;
}
