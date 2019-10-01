#include <stdio.h>

int main() {
	
	int h1, m1, h2, m2, mx, dh, dm;
	scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
	
	mx = (h2 * 60 + m2) - (h1 * 60 + m1);
	
	if (mx < 0)
	{
	mx = ((h2 * 60 + m2) - (h1 * 60 + m1)) + 1440;
	}
	
	dh = mx / 60;
	dm = mx % 60;
	if ((h1 == h2) && (m1 == m2))
	{
	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else
	{
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
	}
	
	return 0;
}
