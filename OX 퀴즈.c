#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[80];
	int num, sum, add;
	
	scanf("%d", &num);
	
	for(int i = 0; i < num; i++)
	{
		sum = 0, add = 0;
		scanf("%s", &arr);
		for(int j = 0; j < strlen(arr); j++)
		{
			if(arr[j] =='O')
			{
				add++;
			}
			else
				add = 0;
			sum += add;
		}
		printf("%d\n", sum);
	}
	return 0;
}
