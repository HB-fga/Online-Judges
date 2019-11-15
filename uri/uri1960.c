#include <stdio.h>

int main() {
	
	int x;
	
	scanf("%d", &x);
	
	if(x==100)
	{
		printf("C\n");
	}
	else if(x==10)
	{
		printf("X\n");
	}
	else if(x==1)
	{
		printf("I\n");
	}
	else if(x/100!=0)
	{
		switch (x/100)
		{
			case 1:
				printf("C");
				break;
			case 2:
				printf("CC");
				break;
			case 3:
				printf("CCC");
				break;
			case 4:
				printf("CD");
				break;
			case 5:
				printf("D");
				break;
			case 6:
				printf("DC");
				break;
			case 7:
				printf("DCC");
				break;
			case 8:
				printf("DCCC");
				break;
			case 9:
				printf("CM");
				break;
		}
		
		switch ((x/10)%10)
		{
			case 1:
				printf("X");
				break;
			case 2:
				printf("XX");
				break;
			case 3:
				printf("XXX");
				break;
			case 4:
				printf("XL");
				break;
			case 5:
				printf("L");
				break;
			case 6:
				printf("LX");
				break;
			case 7:
				printf("LXX");
				break;
			case 8:
				printf("LXXX");
				break;
			case 9:
				printf("XC");
				break;
		}
		
		switch (x%10)
		{
			case 0:
				printf("\n");
				break;
			case 1:
				printf("I\n");
				break;
			case 2:
				printf("II\n");
				break;
			case 3:
				printf("III\n");
				break;
			case 4:
				printf("IV\n");
				break;
			case 5:
				printf("V\n");
				break;
			case 6:
				printf("VI\n");
				break;
			case 7:
				printf("VII\n");
				break;
			case 8:
				printf("VIII\n");
				break;
			case 9:
				printf("IX\n");
				break;
		}
	}
	else if(x/10!=0)
	{
		switch (x/10)
		{
			case 1:
				printf("X");
				break;
			case 2:
				printf("XX");
				break;
			case 3:
				printf("XXX");
				break;
			case 4:
				printf("XL");
				break;
			case 5:
				printf("L");
				break;
			case 6:
				printf("LX");
				break;
			case 7:
				printf("LXX");
				break;
			case 8:
				printf("LXXX");
				break;
			case 9:
				printf("XC");
				break;
		}
		
		switch (x%10)
		{
			case 0:
				printf("\n");
				break;
			case 1:
				printf("I\n");
				break;
			case 2:
				printf("II\n");
				break;
			case 3:
				printf("III\n");
				break;
			case 4:
				printf("IV\n");
				break;
			case 5:
				printf("V\n");
				break;
			case 6:
				printf("VI\n");
				break;
			case 7:
				printf("VII\n");
				break;
			case 8:
				printf("VIII\n");
				break;
			case 9:
				printf("IX\n");
				break;
		}
	}
	else
	{
		switch (x)
		{
			case 2:
				printf("II\n");
				break;
			case 3:
				printf("III\n");
				break;
			case 4:
				printf("IV\n");
				break;
			case 5:
				printf("V\n");
				break;
			case 6:
				printf("VI\n");
				break;
			case 7:
				printf("VII\n");
				break;
			case 8:
				printf("VIII\n");
				break;
			case 9:
				printf("IX\n");
				break;
		}
	}
	
	return 0;
}
