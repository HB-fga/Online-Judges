#include <stdio.h>

int main() {
	
	int n, wb, wa, db, da;
	scanf("%d%d%d%d%d", &n, &wb, &wa, &db, &da);
	
	if ((n >= wb) && (n <= wa) && (n >= db) && (n <= da))
	{
	printf("possivel\n");
	}
	else
	{
	printf("impossivel\n");
	}
	
	return 0;
}
