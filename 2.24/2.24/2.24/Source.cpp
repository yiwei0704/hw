#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a;
	printf("輸入一個整數a\n");
	scanf_s("%d", &a);
	if (a % 2 != 0)
	{
		printf("a=%d是奇數", a);
	}
	else
	{
		printf("a=%d是偶數", a);

	}
	system("pause");
	return 0;
}
