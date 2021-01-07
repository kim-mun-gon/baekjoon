#include <stdio.h>

int main(void)
{
	int arr[8];
	for(int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}
	int count1 = 0;
	int count2 = 0; 
	
	for(int i = 0; i < 4; i++)
	{
		if(arr[i] == i + 1 && arr[i] + arr[7 - i] == 9)
		{
			count1++;
		}
		else if(arr[7 - i] == i+1 && arr[i] + arr[7 - i] == 9)
		{
			count2++;
		}
	}
	
	if(count1 == 4)
	{
		printf("ascending");
	}
	else if(count2 == 4)
	{
		printf("descending");
	}
	else
		printf("mixed");

	return 0;
}
