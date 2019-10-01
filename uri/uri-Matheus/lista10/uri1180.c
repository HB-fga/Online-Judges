#include <stdio.h>

int main() {
	
	int p=0;
	int m, n, x[1200];
	
	scanf("%d", &n);
	scanf("%d", &x[0]);
	m=x[0];
	
	for(int i=1;i<n;i++)
	{
		scanf("%d", &x[i]);
		if(x[i]<m)
		{
			m=x[i];
			p=i;
		}
	}
	
	printf("Menor valor: %d\n", m);
	printf("Posicao: %d\n", p);
	
	return 0;
}
