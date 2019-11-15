#include <stdio.h>

int main() {
	
	int n, x1, x2, t1=0, t2=0, c1=0, c2=0;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d %*c %d", &x1, &x2);
		
		t1+=x1;
		t2+=x2;
		c2+=x2;
		
		scanf("%d %*c %d", &x2, &x1);
		
		t1+=x1;
		t2+=x2;
		c1+=x1;
		
		if(t1!=t2)
		{
			if(t1>t2)
			{
				printf("Time 1\n");
			}
			else
			{
				printf("Time 2\n");
			}
		}
		else if(c1!=c2)
		{
			if(c1>c2)
			{
				printf("Time 1\n");
			}
			else
			{
				printf("Time 2\n");
			}
		}
		else
		{
			printf("Penaltis\n");
		}
		
		t1=0;
		t2=0;
		c1=0;
		c2=0;
	}
	
	return 0;
}
