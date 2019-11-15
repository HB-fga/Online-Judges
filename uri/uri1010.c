#include <stdio.h>
int main() {
	
	int pc1, pq1, pc2, pq2;
	double pv1, pv2, sum;
	
	scanf("%d %d %lf", &pc1, &pq1, &pv1);
	scanf("%d %d %lf", &pc2, &pq2, &pv2);
	
	double x1 = pq1*pv1;
	double x2 = pq2*pv2;
	sum = x1+x2;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", sum);
	
	return 0;
}
