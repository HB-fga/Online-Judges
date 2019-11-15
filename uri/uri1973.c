#include <stdio.h>

int main() {
	
	int a[2000000];
	int x, n=0;
	long long int s=0;
	
	scanf("%d", &x);
	
	for (int i=0;i<x;i++)
	{
		scanf("%d", &a[i]);
		s+=a[i];
	}
	
	for (int i=0;((i>=0) && (i<x));)
	{
		if (n<=i)
		{
			n=i+1;
		}
		
		if (a[i]!=0)
		{
			s--;
		}
		
		if (a[i]%2==0 )
		{
			a[i]--;
			i--;
		}
		else
		{
			a[i]--;
			i++;
		}
	}
	
	printf("%d %lld\n", n, s);
	
	return 0;
}
