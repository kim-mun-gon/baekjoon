#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	int arr[26];
	
	scanf("%s", word);
	
	for(int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	
	for(int i = 0; i < strlen(word); i++)
	{
		if(arr[word[i] - 97] == -1)
		{
			arr[word[i] - 97] = i;
		}
	}
	
	for(int i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
