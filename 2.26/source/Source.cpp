#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("輸入兩數分別為a,b\n");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0) 
	{
		printf("a是b的倍數");
	}
	else
	{
		printf("a不是b的倍數");
	}
	system("pause");
	return 0;
}