#include <stdio.h>

int main () {
	
	int n;
	char a[60];
	char b[60];
	
	scanf("%d", &n);
	
	while (n>0)
	{
		scanf("%s %s", a, b);
		
		for (int i=0;i<60;i++)
		{
			if (a[i]=='\0')
			{
				for (int j=i;b[j]!='\0';j++)
				{
					printf("%c", b[j]);
				}
				break;
			}
			else if (b[i]=='\0')
			{
				for (int j=i;a[j]!='\0';j++)
				{
					printf("%c", a[j]);
				}
				break;
			}
			else
			{
				printf("%c%c", a[i], b[i]);
			}
		}
		printf("\n");
		n--;
	}
	
    return 0;
}
