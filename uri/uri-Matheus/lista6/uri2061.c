#include <stdio.h>

int main() {
	
	int t, a;
	char c1, c2, c3, c4, c5, c6;
	
	scanf("%d %d", &t, &a);
	
	while (a>0)
	{
		scanf(" %c%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5, &c6);
		if(c1 == 'f')
		{
			t++;
		}
		else
		{
			t--;
		}
		a--;
	}
	printf("%d\n", t);
	
	return 0;
}
