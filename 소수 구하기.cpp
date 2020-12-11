#include <stdio.h>

int main(void)
{
	int arr[1000001];
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i = 2; i <= m; i++)
	{
		arr[i] = i;
	}
	
	for(int i = 2; i <= m; i++)
	{
		if(arr[i] == 0)
			continue;
		for(int j = i + i; j <= m; j+=i)
		{
			arr[j] = 0;
		}
	}
	for(int i = n; i <= m; i++)
	{
		if(arr[i] != 0)
			printf("%d\n", arr[i]);
	}
	
	
}


/*
bool isPrimeNuber(int x)
{
	for(int i = 0; i < x; i++)
	{
		if(a % x == 0)
			return false;
	}
	return true;
}*/



/*
int main(void)
{	
	int n, m;
	int count[1000001] = {0};
	scanf("%d %d", &n, &m);
	
	
	for(int i = n; i <= m; i++)
	{
		if(i == 1)
			continue;
		else
		{
			for(int j = 1; j <= i; j++)
			{
				if(i % j == 0)
					count[i]++;
			}
		}
		if(count[i] == 2)
		{
			printf("%d\n", i);
		}
	}
}*/
