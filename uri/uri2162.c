#include <stdio.h>

int main() {
	
	int n, pv, pv0, ov=1, key=1;
	
	scanf("%d", &n);
	scanf("%d", &pv);
	
	pv0=pv;
	
	scanf("%d", &pv);
		
	if (pv==pv0)
	{
		printf("0\n");
		key--;
	}
	
	if (pv>pv0)
	{
		while (n>2)
		{
			pv0=pv;
			scanf("%d", &pv);
			if (ov==1)
			{
				if (pv>=pv0)
				{
					printf("0\n");
					key--;
					break;
				}
				ov++;
			}
			else
			{
				if (pv<=pv0)
				{
					printf("0\n");
					key--;
					break;
				}
				ov--;
			}
			n--;
		}
	}
	else
	{
		while (n>2)
		{
			pv0=pv;
			scanf("%d", &pv);
			if (ov==1)
			{
				if (pv<=pv0)
				{
					printf("0\n");
					key--;
					break;
				}
				ov++;
			}
			else
			{
				if (pv>=pv0)
				{
					printf("0\n");
					key--;
					break;
				}
				ov--;
			}
			n--;
		}
	}
	if (key==1)
	{
		printf("1\n");
	}
	
	return 0;
}
