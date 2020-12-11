#include <stdio.h>
int main(void)
{
	double arr[1000];
	int num;
	double sum = 0;
	int max = 0;
	scanf("%d", &num);
	
	for(int i = 0; i < num; i++)
	{
		scanf("%lf", &arr[i]);
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	for(int i = 0; i < num; i++)
	{
		arr[i] = arr[i]/max * 100;
		sum = sum + arr[i];	
	}
	
	printf("%lf", sum/num);
	
		
}
