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
	for (j = 1; j <= 7; j++)//����7��
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
	/*�ĤG�Ӷ}�l*/
	printf("\n"); 
	printf("\n");
	printf("   ");
	for (i = 1; i <= 3; i++) 
	{
		printf("*");
	}//�Ĥ@��
	printf("\n");
	printf(" *");
	for (i = 1; i <= 5; i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(j=1;j<=5;j++)//���Ŷ}�l5��
	{
		printf("*");
		for (i = 1; i <= 7; i++)
		{
			printf(" ");
		}
	printf("*\n");
	}//���ŵ���
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
	/*�ĤT�Ӷ}�l*/
	printf("\n");
	printf("\n");
	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	for (i = 1; i <= 6; i++) 
	{
		printf("  *\n");
	}
	/*�ĥ|�Ӷ}�l*/
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