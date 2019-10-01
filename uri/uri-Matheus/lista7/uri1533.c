#include <stdio.h>

int main() {
	
	int x, y, z, g1=0, g2=0, g1p=0, g2p=0;
	int a[1001];
	
	while(1)
	{
		scanf("%d", &x);
		if(x==0){break;}
		
		for (int i=0;i<x;i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (int i=0;i<x;i++)
		{
			if (i>1)
			{
				if (a[i]>g1)
				{
					g2=g1;
					g1=a[i];
					g2p=g1p;
					g1p=i+1;
				}
				else if (a[i]>g2)
				{
					g2=a[i];
					g2p=i+1;
				}
			}
			else
			{
				g2=g1;
				g1=a[i];
				g2p=g1p;
				g1p=i+1;
				
				if (g2>g1)
				{
					z=g2;
					g2=g1;
					g1=z;
					y=g2p;
					g2p=g1p;
					g1p=y;
				}
			}
		}
		
		printf("%d\n", g2p);
		g1=0;
		g2=0;
		g1p=0;
		g2p=0;
	}
	
	return 0;
}
