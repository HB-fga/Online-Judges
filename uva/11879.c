#include <stdio.h>

int main() {
	
	char num[210];
	int sum, x;
	
	while(1)
	{
		x=0;
		scanf("%s", num);
		if((num[0]=='0') && (num[1]=='\0')){break;}
		
		for(int i=0;num[i]!='\0';i++)
		{
			sum=(x*10)+(num[i]-'0');
			x=sum%17;
		}
		
		if(x==0)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	
	return 0;
}
