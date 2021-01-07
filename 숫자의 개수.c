#include <stdio.h>

int main(void)
{
	int a, b, c;
	int gop;
	int arr[10] = {0};
	scanf("%d %d %d", &a, &b, &c);
	gop = a * b* c;
	
	while(gop > 0)
	{
		arr[gop%10]++;
		gop = gop / 10;
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
	
		
}
