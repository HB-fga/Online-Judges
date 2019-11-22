#include <stdio.h>

int sl(char string[]) {
	
	int counter=0;
	
	for (int i=0;string[i]!='\0';i++)
	{
		counter++;
	}
	
	return counter;
}

int main() {
	
	char s[60][60];
	int n, f=1;
	int msb=0;
	
	while(1)
	{
		scanf("%d", &n);
		if(n==0) {break;}
		
		for(int i=0;i<n;i++)
		{
			scanf(" %s", s[i]);
			if(sl(s[i])>msb)
			{
				msb=sl(s[i]);
			}
		}
		
		if(f!=0)
		{
			f=0;
		}
		else
		{
			printf("\n");
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<msb-sl(s[i]);j++)
			{
				printf(" ");
			}
			
			printf("%s\n", s[i]);
		}
		msb=0;
	}
	
	return 0;
}
