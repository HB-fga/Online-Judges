#include <stdio.h>
int main() {
	
	char a = 'D';
	char b = 'i';
	char c = 'a';
	char t = ' ';
	char j = ':';
	int di1, ho1, mi1, se1, di2, ho2, mi2, se2;
	int x, y, z;
	int d, h, m, s;
	
	scanf("%c%c%c%c%d", &a, &b, &c, &t, &di1);
	scanf("%d%c%c%c%d%c%c%c%d", &ho1, &t, &j, &t, &mi1, &t, &j, &t, &se1);
	scanf("%c%c%c%c%d", &a, &b, &c, &t, &di2);
	scanf("%d%c%c%c%d%c%c%c%d", &ho2, &t, &j, &t, &mi2, &t, &j, &t, &se2);
	
	di1 = di1 * 86400;
	ho1 = ho1 * 3600;
	mi1 = mi1 * 60;
	x = di1 + ho1 + mi1 + se1;
	
	di2 = di2 * 86400;
	ho2 = ho2 * 3600;
	mi2 = mi2 * 60;
	y = di2 + ho2 + mi2 + se2;
	
	z = y - x;
	
	d = z / 86400;
	z = z % 86400;
	h = z / 3600;
	z = z % 3600;
	m = z / 60;
	z = z % 60;
	s = z;
		
	printf("%d dia(s)\n", d);
	printf("%d hora(s)\n", h);
	printf("%d minuto(s)\n", m);
	printf("%d segundo(s)\n", s);
	
	return 0;
}
