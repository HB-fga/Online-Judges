#include <stdio.h>
int main() {
	
	int p, j1, j2, c, a;
	scanf("%d%d%d%d%d", &p, &j1, &j2, &c, &a);
	int x = j1 +j2;
	
	if ((c == 1) && (a == 0))
	{
	printf("Jogador 1 ganha!\n");
	}
	else if ((c == 0) && (a == 1))
	{
	printf("Jogador 1 ganha!\n");
	}
	else if ((c == 1) && (a == 1))
	{
	printf("Jogador 2 ganha!\n");
	}
	else if (p == 0)
	{
		if (x % 2 == 0)
		{
		printf("Jogador 2 ganha!\n");
		}
		else
		{
		printf("Jogador 1 ganha!\n");
		}
	}
	else
	{
		if (x % 2 == 0)
		{
		printf("Jogador 1 ganha!\n");
		}
		else
		{
		printf("Jogador 2 ganha!\n");
		}
	}
	
	return 0;
}
