#include <stdio.h>

int main(void)
{
	int A, B;
	int n1, n2;
	scanf("%d %d", &A, &B);
	
	n1 = (A / 100) + 100*(A % 10) + ((A % 100) / 10)*10;
	n2 = (B / 100) + 100*(B % 10) + ((B % 100) / 10)*10;
	
	if(n1 > n2)
	{
		printf("%d", n1);
	}
	else
		printf("%d", n2);
	
	
}
