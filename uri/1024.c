#include <stdio.h>

int main() {
	
	int n, aux;
	int c=0;
	char s[1200];
	
	scanf("%d", &n);
	
	while (n>0)
	{
		scanf(" %[^\n]", s);
		
		for (int i=0;s[i]!='\0';i++)
		{
			if(((s[i]>=65) && (s[i]<=90)) || ((s[i]>=97) && (s[i]<=122)))
			{
				s[i]+=3;
			}
			c++;
		}
		
		for (int i=0;i<c/2;i++)
		{
			aux=s[i];
			s[i]=s[(c-1)-i];
			s[(c-1)-i]=aux;
		}
		
		for (int i=(c/2);i<c;i++)
		{
			s[i]--;
		}
		
		printf("%s\n", s);
		c=0;
		n--;
	}
	
	return 0;
}
