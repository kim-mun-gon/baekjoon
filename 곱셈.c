#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	scanf("%d %d", &a, &b);
	
	c = a * (b % 10);
	d = a * ((b / 10) % 10);
	e = a * (b / 100);
	f = a * b;
	
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	
	return 0;
}
