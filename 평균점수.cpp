#include<stdio.h>

int main(void)
{
	int arr[5] = {};
	int sum = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] < 40)
		{
			arr[i] = 40;
		}
		sum = sum + arr[i];
	}
	
	printf("%d", sum / 5);
}
