#include <stdio.h>

int main(void)
{
	int A, B, C; // a = �������, b = �������, c =  ��Ʈ�� ���� 
	 
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
