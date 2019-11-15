#include <stdio.h>

int main() {
	
	char s[120];
	int n, aux1, aux2;
	int c=0;
	
	scanf("%d%*c", &n);
	
	while (n>0)
	{
		scanf("%[^\n]%*c", s);
		
		for (int i=0;s[i]!='\0';i++)
		{
			c++;
		}
		
		for (int i=0, z=(c/2);i<(c/4);i++,z++)
		{
			aux1=s[i];
			s[i]=s[((c/2)-1)-i];
			s[((c/2)-1)-i]=aux1;
			
			aux2=s[z];
			s[z]=s[(c-1)-i];
			s[(c-1)-i]=aux2;
		}
		printf("%s\n", s);
		c=0;
		n--;
	}
	
	return 0;
}
