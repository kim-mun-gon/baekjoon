#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000001];
	int count = 0;
	scanf("%[^\n]s", str);
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			count++;
		}
	}
	
	if (str[0] == ' ' && str[strlen(str) - 1] == ' ')
		count -= 2;
	else if (str[0] == ' ')
		count -= 1;
	else if (str[strlen(str) - 1] == ' ')
		count -= 1;
	printf("%d", count + 1);
}
