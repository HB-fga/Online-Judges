#include <stdio.h>

int main() {
	
	int x, z;
	int m[100][100];
	
	while(1)
	{
		scanf("%d", &x);
		if (x==0){break;}
		
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<x;j++)
			{
				m[i][j]=0;
			}
		}
		
		for (int i=0;i<x;i++)
		{
			for (int j=0;j<x;j++)
			{
				if (i>=j)
				{
					z=i-j+1;
				}
				else
				{
					z=j-i+1;
				}
				while (z>0)
				{
					m[i][j]++;
					z--;
				}
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
	}
	
	return 0;
}
