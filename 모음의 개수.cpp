#include <stdio.h>

int main(void)
{
	char str[101];
	int count = 0;
	scanf("%s", str);
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 'a' || str[i]=='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			count++;
		}
	}
	printf("%d", count);
}
