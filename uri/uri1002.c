#include <stdio.h>

int main() {
	
	double pi = 3.14159;
	double R;
	scanf("%lf", &R);
	double A = pi * R * R;
	printf("A=%.4lf\n", A);
	
	return 0;
}
