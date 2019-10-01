#include <stdio.h>

int main() {
	
	double n, m;
	
	for (int c=2;c>0;)
	{
		scanf("%lf", &n);
		
		if ((n >= 0.0) && (n <= 10.0))
		{
			c--;
			m += n;
		}
		
		else
		{
			printf("nota invalida\n");
		}
	}
	printf("media = %.2lf\n", m/2);
	
	return 0;
}
