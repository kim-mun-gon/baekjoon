#include<stdio.h>

void sort(int arr[]);
int swap(int *a, int *b);

int main(void)
{
	int n;
	scanf("%d", &n);
	int arr1[n];
	int arr2[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", arr1[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", arr2[i]);
	}
	
	sort(arr1);
	sort(arr2);
	
	int start = 0;
	int end = len(a)
	return 0;
}


void sort(int arr[])
{
	for(int i = 0; i < n -1; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap();
			}
		}
	}
}



int swap(int *a, int *b){
	int temp = *a
	*a = *b;
	*b = temp;
} 
