#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int a;
	printf("��J�@�Ӿ��a\n");
	scanf_s("%d", &a);
	if (a % 2 != 0)
	{
		printf("a=%d�O�_��", a);
	}
	else
	{
		printf("a=%d�O����", a);

	}
	system("pause");
	return 0;
}
