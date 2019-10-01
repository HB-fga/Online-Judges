#include <stdio.h>

int main() {
	
	double a, b, c, p, at;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if ((a < (b+c)) && (b < (a+c)) && (c < (a+b)))
	{
	p = a+b+c;
	printf("Perimetro = %.1lf\n", p);
	}
	else
	{
	at = ((a + b) * c) / 2;
	printf("Area = %.1lf\n", at);
	}
	
	return 0;
}
