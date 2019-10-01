#include <stdio.h>

int main() {
	
	double x;
	int y, n100, n50, n20, n10, n5, n2, m1, m05, m025, m01, m005, m001;
	scanf("%lf", &x);
	
	y = x * 100;
	n100 = y / 10000;
	y = y % 10000;
	n50 = y / 5000;
	y = y % 5000;
	n20 = y / 2000;
	y = y % 2000;
	n10 = y / 1000;
	y = y % 1000;
	n5 = y / 500;
	y = y % 500;
	n2 = y / 200;
	y = y % 200;
	m1 = y / 100;
	y = y % 100;
	m05 = y / 50;
	y = y % 50;
	m025 = y / 25;
	y = y % 25;
	m01 = y / 10;
	y = y % 10;
	m005 = y / 5;
	y = y % 5;
	m001 = y;
	
	
		
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m05);
	printf("%d moeda(s) de R$ 0.25\n", m025);
	printf("%d moeda(s) de R$ 0.10\n", m01);
	printf("%d moeda(s) de R$ 0.05\n", m005);
	printf("%d moeda(s) de R$ 0.01\n", m001);
	
	return 0; 
}
