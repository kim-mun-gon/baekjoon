#include <stdio.h>

int main(void)
{
	char arr[101];
	int n;
	int sum = 0;
	scanf("%d", &n);
	scanf("%s", arr);
	
	
	for(int i = 0; i < n; i++)
	{
		sum = sum + arr[i] - '0';  
	}
	
	printf("%d", sum);
}
// �ƽ�Ű �ڵ� n���� �ƽ�Ű �ڵ� ���� 0��ŭ ����, 
// ���ڿ� ���� �������� ���� �� �ִ�.
