#include <stdio.h>

int main() {
	
	int mt1, mt2;
	
	for (int h1, m1, h2, m2;;)
	{
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		
		if ((h1==0) && (m1==0) && (h2==0) && (m2==0)) {break;}
		
		mt1 = h1 * 60 + m1;
		mt2 = h2 * 60 + m2;
		
		if (mt1 <= mt2)
		{
			printf("%d\n", mt2-mt1);
		}
		else
		{
			printf("%d\n", (mt2+1440)-mt1);
		}
	}
	
	return 0;
}
