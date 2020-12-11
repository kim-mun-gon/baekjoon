#include <stdio.h>

int main(void)
{
	int arr[101];
	int count[101] = {0}; //약수의 개수 
	int cnt = 0; //소수의 개수 
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 1)
		{
			continue;
		}
		else
			for(int j = 1; j <= arr[i]; j++)
			{
				if(arr[i] % j ==0)
				{
					count[i] = count[i] + 1;
				}
			}
		if(count[i] == 2)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}
