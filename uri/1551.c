#include <stdio.h>

int main() {
	
	char f[1050];
	int alfa[200]={};
	int n, c=0;
	
	scanf("%d", &n);
	
	for(int j=0;j<n;j++)
	{
		scanf(" %[^\n]", f);
		
		for(int i=0;f[i]!='\0';i++)
		{
			if((f[i]>='A') && (f[i]<='Z'))
			{
				f[i]+=32;
			}
			alfa[f[i]]++;
		}
		
		for(int i='a';i!='z'+1;i++)
		{
			if(alfa[i]>0)
			{
				c++;
			}
		}
		
		if(c>=26)
		{
			printf("frase completa\n");
		}
		else if(c>=13)
		{
			printf("frase quase completa\n");
		}
		else
		{
			printf("frase mal elaborada\n");
		}
		
		for(int i=0;i<200;i++)
		{
			alfa[i]=0;
		}
		c=0;
	}
	
	return 0;
}
