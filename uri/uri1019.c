#include <stdio.h>

int main() {
	
	int N;
	scanf("%d", &N);
	int s = N % 60;
	int x = N / 60;
	int h = x / 60;
	int m = x % 60;
	printf("%d:%d:%d\n", h, m, s);
	
	return 0;
}
