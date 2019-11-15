#include <stdio.h>

int main() {
	
	int comp[120][120];
	int m, n;
	int f1=1, f2=1, f3=1, f4=1;
	int r=4, x=0, y=0;
	
	while(1)
	{
		scanf("%d %d", &m, &n);
		if((m==0) && (n==0)) {break;}
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d", &comp[i][j]);
			}
		}
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				x+=comp[i][j];
			}
			
			if((x==0) && (f1==1))
			{
				r--;
				f1=0;
			}
			else if((x==n) && (f2==1))
			{
				r--;
				f2=0;
			}
			x=0;
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				y+=comp[j][i];
			}
			
			if((y==0) && (f3==1))
			{
				r--;
				f3=0;
			}
			else if((y==m) && (f4==1))
			{
				r--;
				f4=0;
			}
			y=0;
		}
		
		printf("%d\n", r);
		f1=1;
		f2=1;
		f3=1;
		f4=1;
		r=4;
		x=0;
		y=0;
	}
	
	return 0;
}
