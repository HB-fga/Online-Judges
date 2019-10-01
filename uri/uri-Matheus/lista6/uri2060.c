#include <stdio.h>

int main() {
	
	int d=0, t=0, q=0, c=0;
	int n, x;
	
	scanf("%d", &n);
	
	while (n>0)
	{
		scanf("%d", &x);
		if (x%2==0)
		{
			d++;
		}
		if (x%3==0)
		{
			t++;
		}
		if (x%4==0)
		{
			q++;
		}
		if (x%5==0)
		{
			c++;
		}
		n--;
	}
	printf("%d Multiplo(s) de 2\n", d);
	printf("%d Multiplo(s) de 3\n", t);
	printf("%d Multiplo(s) de 4\n", q);
	printf("%d Multiplo(s) de 5\n", c);
	
	return 0;
}
