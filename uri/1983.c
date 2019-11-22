#include <stdio.h>

int main() {
	
	int n, m1, m2=0;
	double n1, n2=0;
	
	scanf("%d",&n);
	
	for (;n>0;n--)
	{
		scanf("%d %lf", &m1, &n1);
		
		if (n1 > n2)
		{
			n2 = n1;
			m2 = m1;
		}
	}
	if (n2 < 8)
	{
		printf("Minimum note not reached\n");
	}
	else
	{
		printf("%d\n", m2);
	}
	
	return 0;
}
