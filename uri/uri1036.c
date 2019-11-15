#include <stdio.h>
#include <math.h>

int main() {
	
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if ((a == 0) || (b * b - 4 * a * c < 0))
	{
	printf("Impossivel calcular\n");
	}
	else 
	{
	double D = (b * b - 4 * a * c);
	double r = sqrt(D);
	double R1 = ((-b + r) / (2 * a));
	double R2 = ((-b - r) / (2 * a));
	printf("R1 = %.5lf\n", R1);
	printf("R2 = %.5lf\n", R2);
	}
	
	return 0;
}
