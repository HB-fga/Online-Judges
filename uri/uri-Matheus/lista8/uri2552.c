#include <stdio.h>

int main() {
	
	int m[150][150];
	int x, y, s;
	
	while (scanf("%d %d", &x, &y) != EOF)
	{
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			
			if(m[i][j]==1)
			{
				printf("9");
			}
			else
			{
				if ((i==0) && (j==0))
				{
					s=m[i+1][j]+m[i][j+1];
				}
				else if ((i==x-1) && (j==y-1))
				{
					s=m[i-1][j]+m[i][j-1];
				}
				else if ((i==0) && (j==y-1))
				{
					s=m[i+1][j]+m[i][j-1];
				}
				else if ((i==x-1) && (j==0))
				{
					s=m[i-1][j]+m[i][j+1];
				}
				else if (i==0)
				{
					s=m[i+1][j]+m[i][j+1]+m[i][j-1];
				}
				else if (i==x-1)
				{
					s=m[i-1][j]+m[i][j+1]+m[i][j-1];
				}
				else if (j==0)
				{
					s=m[i+1][j]+m[i-1][j]+m[i][j+1];
				}
				else if (j==y-1)
				{
					s=m[i+1][j]+m[i-1][j]+m[i][j-1];
				}
				else
				{
					s=m[i+1][j]+m[i-1][j]+m[i][j+1]+m[i][j-1];
				}
				printf("%d", s);
			}
		}
		printf("\n");
	}
	}
	
	return 0;
}
