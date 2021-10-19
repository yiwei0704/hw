#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j,k;
	for (i = 1; i <= 9; i++) 
	{
		printf("*");
	}
	printf("\n");
	for (j = 1; j <= 7; j++)//挖空7行
	{
		printf("*");
		for (i = 1; i <= 7; i++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 1; i <= 9; i++)
	{
		printf("*");
	}
	/*第二個開始*/
	printf("\n"); 
	printf("\n");
	printf("   ");
	for (i = 1; i <= 3; i++) 
	{
		printf("*");
	}//第一行
	printf("\n");
	printf(" *");
	for (i = 1; i <= 5; i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(j=1;j<=5;j++)//挖空開始5行
	{
		printf("*");
		for (i = 1; i <= 7; i++)
		{
			printf(" ");
		}
	printf("*\n");
	}//挖空結束
	printf(" *");
	for (i = 1; i <= 5; i++)
	{
		printf(" ");
	}
	printf("*\n");
	printf("   ");
	for (i = 1; i <= 3; i++)
	{
		printf("*");
	}
	/*第三個開始*/
	printf("\n");
	printf("\n");
	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	for (i = 1; i <= 6; i++) 
	{
		printf("  *\n");
	}
	/*第四個開始*/
	printf("\n");
	printf("\n");
	printf("    *\n");
	printf("   * *\n");
	printf("  *   *\n");
	printf(" *     *\n");
	printf("*       *\n");
	printf(" *     *\n");
	printf("  *   *\n");
	printf("   * *\n");
	printf("    *\n");
	system("pause");
	return 0; 
}