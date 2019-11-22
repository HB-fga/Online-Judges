#include <stdio.h>

int main() {
	
	char a;
	char t, T;
	int f=0;
	
	while(1)
	{
		scanf("%c", &a);
		if(a=='*') {break;}
		
		if(a<95)
		{
			T=a;
			t=a+32;
		}
		else
		{
			T=a-32;
			t=a;
		}
		
		while(1)
		{
			scanf("%c", &a);
			if(a=='\n') {break;}
			else if(a==' ')
			{
				scanf("%c", &a);
				if((a!=t) && (a!=T))
				{
					f=1;
				}
			}
		}
		if(f==0)
		{
			printf("Y\n");
		}
		else 
		{
			printf("N\n");
			f=0;
		}
		
	}
	
	return 0;
}
