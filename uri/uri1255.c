#include <stdio.h>

int main() {
	
	int n, k, x=0;
	int a[200]={};
	char s[300];
	
	scanf("%d%*c", &n);
	
	for (int i=0;i<n;i++)
	{

		scanf("%[^\n]%*c", s);
	
		
		for (int j=0;s[j]!='\0';j++)
		{
			if ((s[j]>=65) && (s[j]<=90))
			{
				s[j]+=32;
			}
			if (s[j] >= 97 && s[j] <= 122)
			{
				k=s[j];
				a[k]++;
				if (a[k]>x)
				{
					x=a[k];
				}
			}
		}
		
		for (char c='a';c<='z';c++)
		{
			if (a[c]==x)
			{
				printf("%c", c);
			}
		}
		printf("\n");
		
		x=0;
		for (int j=0;j<200;j++)
		{
			a[j]=0;
		}
	}
	
	return 0;
}
