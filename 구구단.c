#include <stdio.h>

int main(void){
	
	int a, b;
	scanf("%d", &b);
	
	for(a = 1; a < 10; a++){
		printf("%d * %d = %d\n", b, a, b * a);
	}
	return 0;
}
