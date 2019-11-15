#include <stdio.h>

int main() {
	
	int n, m, p, x, y;
	int dt[110];
	char msg[110][60];
	
	while(1)
	{
		scanf("%d", &n);
		if(n==0){break;}
		
		for(int i=0;i<n;i++)
		{
			scanf(" %s %d %d", msg[i], &x, &y);
			dt[i]=x-y;
		}
		
		m=dt[0];
		p=0;
		for(int i=0;i<n;i++)
		{
			if(dt[i]<m)
			{
				m=dt[i];
				p=i;
			}
		}
		
		printf("%s\n", msg[p]);
	}
	
	return 0;
}
