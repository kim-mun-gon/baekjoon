#include <stdio.h>

int main(void){
	int n;
	int gop = 1;
	scanf("%d", &n);
	
	for(int i = n; i > 0; i--)
	{
		gop =  gop * i;
	}
	
	printf("%d", gop);
}
