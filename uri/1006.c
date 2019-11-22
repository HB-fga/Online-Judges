#include <stdio.h>
int main() {
	
	double A, B, C;
	scanf("%lf\n %lf\n %lf", &A, &B, &C);
	double med = (A * 2 + B * 3 + C * 5) / 10;
	printf("MEDIA = %.1lf\n", med);
	
	return 0;
}
