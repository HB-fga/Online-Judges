#include <stdio.h>

int main() {
	
	int n, l=0;
	char v='x', br;
	
	scanf("%d", &n);
	scanf("%c", &br);
	
	while (n>0)
	{
		while (v != '\n')
		{
			scanf("%c", &v);
			
			if (v=='1')
			{
				l += 2;
			}
			if (v=='7')
			{
				l += 3;
			}
			if (v=='4')
			{
				l += 4;
			}
			if ((v=='2') || (v=='3') || (v=='5'))
			{
				l += 5;
			}
			if ((v=='6') || (v=='9') || (v=='0'))
			{
				l += 6;
			}
			if (v=='8')
			{
				l += 7;
			}
		}
		printf("%d leds\n", l);
		v='x';
		l=0;
		n--;
	}
	
	return 0;
}
