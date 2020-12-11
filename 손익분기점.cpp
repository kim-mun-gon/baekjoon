#include <stdio.h>

int main(void)
{
	int A, B, C; // a = 고정비용, b = 가변비용, c =  노트북 가격 
	 
	scanf("%d %d %d", &A, &B, &C);
	
	if(B >= C)
	{
		printf("-1\n");	
	}	
	else
	{
		printf("%d", A/(C-B) + 1);
		return 0;
	}
}
