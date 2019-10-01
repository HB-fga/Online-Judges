#include <stdio.h>

int main() {
	
	int rm, n100, n50, n20, n10, n5, n2, n1;
	scanf("%d", &rm);
	n100 = rm / 100;
	int rm2 = rm % 100;
	n50 = rm2 / 50;
	int rm3 = rm2 % 50;
	n20 = rm3 / 20;
	int rm4 = rm3 % 20;
	n10 = rm4 / 10;
	int rm5 = rm4 % 10;
	n5 = rm5 / 5;
	int rm6 = rm5 % 5;
	n2 = rm6 / 2;
	n1 = rm6 % 2;
	
	printf("%d\n", rm);
	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);
	printf("%d nota(s) de R$ 2,00\n", n2);
	printf("%d nota(s) de R$ 1,00\n", n1);
	
	return 0; 
}
