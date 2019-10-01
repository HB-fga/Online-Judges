#include <stdio.h>

int main() {
	
	int n;
	double kg[400]={};
	double mk=0, mp=0, p;
	char s[2000];
	char f='a';
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%lf", &p);
		mp+=p;
		
		while(f!='\n')
		{
			scanf(" %s%c", s, &f);
			kg[i]+=1;
		}
		f='a';
		mk+=kg[i];
	}
	
	for(int i=0;i<n;i++)
	{
		printf("day %d: %.0lf kg\n", i+1, kg[i]);
	}
	printf("%.2lf kg by day\n", (mk/n));
	printf("R$ %.2lf by day\n", (mp/n));
	
	return 0;
}
