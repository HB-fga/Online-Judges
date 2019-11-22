#include <stdio.h>

int main() {
	
	int n1, n2, same;
	int r=0;
	int com[110];
	char s[50];
	
	scanf("%d", &n1);
	
	for(int i=0;i<n1;i++)
	{
		scanf("%d", &n2);
		
		for(int j=1;j<=n2;j++)
		{
			scanf(" %s", s);
			
			if(s[0]!='S')
			{
				if(s[0]=='L')
				{
					r--;
					com[j]=-1;
				}
				else if(s[0]=='R')
				{
					r++;
					com[j]=1;
				}
			}
			else
			{
				scanf(" %*s %d", &same);
				if(com[same]==-1)
				{
					r--;
					com[j]=-1;
				}
				else if(com[same]==1)
				{
					r++;
					com[j]=1;
				}
			}
		}
		
		printf("%d\n", r);
		
		r=0;
	}
	
	return 0;
}
