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
// 아스키 코드 n에서 아스키 코드 숫자 0만큼 빼면, 
// 숫자에 대한 정숫값을 구할 수 있다.
