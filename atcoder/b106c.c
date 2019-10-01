#include <stdio.h>

int main() {
	
	char x[110];
	unsigned long long int y;
	int f=0;
	
	scanf("%s", x);
	scanf("%llu", &y);
	
	for(int i=0;i<y;i++)
	{
		if((x[i]-'0')>1)
		{
			printf("%d\n", (x[i]-'0'));
			f=1;
			break;
		}
	}
	
	if(f==0)
	{
		printf("1\n");
	}
	
	return 0;
}
