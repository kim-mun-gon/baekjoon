#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	while(1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a == 0 && b == 0 && c == 0)
			break;
		if(a > b && a > c)
		{
			if(a*a == b*b + c*c)
			{
				printf("right\n");
			}
			else
				printf("wrong\n");
		}
		else if(b > a && b > c)
		{
			if(b*b == a*a + c*c)
			{
				printf("right\n");
			}
			else
				printf("wrong\n");
		}
		else if(c > a && c > b)
		{
			if(c*c == b*b + a*a)
			{
				printf("right\n");
			}
			else
				printf("wrong\n");
		}
	}
}
