#include <stdio.h>

int main() {
	
	int n, c=0;
	int m[300][10];
	char r='*';
	
	while (1)
	{
		scanf("%d", &n);
		if (n==0) {break;}
		
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<1;j++)
			{
				for (int k=0;k<5;k++)
				{
					scanf("%d", &m[j][k]);
					if (m[j][k]<128)
					{
						c++;
						switch (k)
						{
							case 0:
								r='A';
								break;
							case 1:
								r='B';
								break;
							case 2:
								r='C';
								break;
							case 3:
								r='D';
								break;
							case 4:
								r='E';
								break;
						}
					}
				}
			}
			
			if (c==1)
			{
				printf("%c\n", r);
			}
			else
			{
				printf("*\n");
			}
			c=0;
			r='*';
		}
		
		
	}
	
	return 0;
}
