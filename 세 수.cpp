#include <stdio.h>

int main(void)
{
	int arr[3] = {};
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	
	for(int i = 0; i < 2; i++)
	{
		for(int i = 0; i < 2; i++)
		{
			if(arr[i] >= arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp; 
			}
		}
	}
	printf("%d\n", arr[1]);
	
}
