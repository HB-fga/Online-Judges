#include <stdio.h>

int main() {
	
	int m[1002][1002];
	int dx[8]={0, 0, 1, 1, 1, -1, -1, -1};
	int dy[8]={1, -1, 0, 1, -1, 0, 1, -1};
	int x=0, y=0, c=0, k=0;
	int u, v;
	
	scanf("%d %d", &u, &v);
	
	for (int i=0;i<u;i++)
	{
		for (int j=0;j<v;j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	
	for (int i=1;i<u-1;i++)
	{
		for (int j=1;j<v-1;j++)
		{
			if (m[i][j]==42)
			{
				for (int z=0;z<8;z++)
				{
					if(m[i+(dx[z])][j+(dy[z])]==7)
					{
						c++;
					}
				}
				if(c==8)
				{
					x=i+1;
					y=j+1;
					k++;
				}
				else
				{
					c=0;
				}
			}
		}
	}
	
	if (k==1)
	{
		printf("%d %d\n", x, y);
	}
	else
	{
		printf("0 0\n");
	}
	
	return 0;
}
