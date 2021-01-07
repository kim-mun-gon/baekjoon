#include <stdio.h>

long long sum(int *arr, int n){
	
	long long tot = 0;
	
	for(int i = 0; i < n; i++)
	{
		tot = tot + arr[i];
	}
	return tot;
}

int main(void)
{
	int n;
	int tot;
	scanf("%d", &n);
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	tot = sum(arr, n);
	printf("%d", tot);
}
