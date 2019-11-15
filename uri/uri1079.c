#include <stdio.h>

int main() {
	
	int c=1, n;
	double x, y, z, m;
	scanf("%d", &n);
	
	while (c<=n)
	{
		scanf("%lf %lf %lf", &x, &y, &z);
		m = (((x*2)+(y*3)+(z*5))/10);
		printf("%.1lf\n", m);
		c++;
	}
	
	return 0;
}
