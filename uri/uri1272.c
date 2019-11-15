#include <stdio.h>

int main() {
	
	int n;
	char s[60];
	char s2[60];
	
	scanf("%d%*c", &n);
	
	while (n>0)
	{
		for (int i=0;i<60;i++)
		{
			s2[i]=0;
		}
		
		scanf("%[^\n]%*c", s);
		
		for (int i=0, z=0;s[i]!='\0';i++)
		{
			if ((i==0) && (s[i]==' '))
			{}
			else if ((s[i-1]!=' ') && (i!=0))
			{}
			else if (s[i]!=' ')
			{
				s2[z]=s[i];
				z++;
			}
		}
		
		printf("%s\n", s2);
		n--;
	}
	
	return 0;
}
