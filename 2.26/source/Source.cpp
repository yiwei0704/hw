#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("��J��Ƥ��O��a,b\n");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0) 
	{
		printf("a�Ob������");
	}
	else
	{
		printf("a���Ob������");
	}
	system("pause");
	return 0;
}