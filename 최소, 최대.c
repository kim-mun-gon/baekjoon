#include <stdio.h>
#define SIZE 1000000
int main(void)
{
	int arr[SIZE];
	int num;
	int max, min;
	
	scanf("%d", &num);
	
	for(int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
		max = arr[0];
		min = arr[0];
	}
	
	for(int i = 0; i < num; i++)
	{
		if(max < arr[i]){
		max = arr[i];
		}
		
		if(min > arr[i]){
		min = arr[i];
		}
	}
	printf("%d %d", min, max);
	return 0;
}
