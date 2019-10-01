#include <stdio.h>

int main() {
	
	int v, p, t, c=0;
	
	for (;v==v;c=0)
	{
		scanf("%d %d", &v, &p);
		if ((v == 0) && (p == 0)) {break;}
		
		t = p - v;
		
		for (int a=1;(t>=100) && (a==1);a++)
		{
			t-=100;
			c++;
			if ((t == 0) && (c == 2))
			{
				printf("possible\n");
				break;
			}
		}
		for (int a=1;(t>=50) && (a==1);a++)
		{
			t-=50;
			c++;
			if ((t == 0) && (c == 2))
			{
				printf("possible\n");
				break;
			}
		}
		for (int a=1;(t>=20) && (a==1);a++)
		{
			t-=20;
			c++;
			if ((t == 0) && (c == 2))
			{
				printf("possible\n");
				break;
			}
		}
		for (int a=1;(t>=10) && (a==1);a++)
		{
			t-=10;
			c++;
			if ((t == 0) && (c == 2))
			{
				printf("possible\n");
				break;
			}
		}
		for (int a=1;(t>=5) && (a==1);a++)
		{
			t-=5;
			c++;
			if ((t == 0) && (c == 2))
			{
				printf("possible\n");
				break;
			}
		}
		for (int a=1;(t>=2) && (a==1);a++)
		{
			t-=2;
			c++;
			if ((t == 0) && (c == 2))
			{
				printf("possible\n");
				break;
			}
		}
		if ((t == 1) || (c != 2))
		{
			printf("impossible\n");
		}
	}
	
	return 0;
}
