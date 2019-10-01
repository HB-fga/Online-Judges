#include <stdio.h>

int main() {
	
	int x, b;
	char d;
	
	while (1)
	{
		
		b=1;
		scanf("%d", &x);
		if(x==0){break;}
		
		for (int i=0;i<x;i++)
		{
			scanf(" %c", &d);
			
			if (d == 'E')
			{
				b--;
				if(b<1)
				{
					b=4;
				}
			}
			else if (d == 'D')
			{
				b++;
				if(b>4)
				{
					b=1;
				}
			}
		}
		
		switch (b)
		{
			case 1:
				printf("N\n");
				break;
			case 2:
				printf("L\n");
				break;
			case 3:
				printf("S\n");
				break;
			case 4:
				printf("O\n");
				break;
		}
	}
	
	return 0;
}
