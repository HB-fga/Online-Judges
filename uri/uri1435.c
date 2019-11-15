#include <stdio.h>

int main() {
	
	int a[1000000];
	int m[100][100];
	int x, c=0, y=1;
	
	for (int i=0;i<1000000;i++)
	{
		scanf("%d", &a[i]);
		if (a[i]==0) {break;}
		c++;
	}
	
	for (int d=0;d<c;d++)
	{
		x=a[d];
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<x;j++)
			{
				m[i][j]=1;
			}
		}
		
		if ((x>2) && (x%2==0))
		{
			for (int f=0;f<((x/2)-1);f++)
			{
				for (int i=y;i<x-y;i++)
				{
					for (int j=y;j<x-y;j++)
					{
						m[i][j]++;
					}
				}
				y++;
			}
		}
		
		else if (x>2)
		{
			for (int f=0;f<x/2;f++)
			{
				for (int i=y;i<x-y;i++)
				{
					for (int j=y;j<x-y;j++)
					{
						m[i][j]++;
					}
				}
				y++;
			}
		}
		
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<x;j++)
			{
				if (j!=x-1)
				{
					printf("%3d ", m[i][j]);
				}
				else
				{
					printf("%3d", m[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
		y=1;
	}
	
	return 0;
}
