#include <stdio.h>

int main(void)
{
	int num1; //�Է� ���� Ƚ��
	int num2; //�ݺ��� Ƚ�� 
	char str[100];
	 
	scanf("%d", &num1);
	
	for(int i = 0; i < num1; i++)
	{
		scanf("%d", &num2);
		scanf("%s", str);
		for(int j = 0; str[j] != '\0'; j++)
		{
			for(int k = 0; k < num2; k++)
			{
				printf("%c", str[j]); 
			}
		}
		printf("\n");
	}
}
