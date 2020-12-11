#include <stdio.h>

int main(void)
{
	int n;
	int A, B, C, D;
	int result;
	int count = 0;
	
	scanf("%d", &n);
	result = n;
	
	while(1)
	{
		A = n / 10;
		B = n % 10;
		C = (A + B) % 10;
		D = C + 10*B;
		n = D;
		count++;
		if(result == D)
		{
			break;
		}
	}
	printf("%d", count);
	
	return 0;
}
