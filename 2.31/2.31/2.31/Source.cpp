#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, number, square, cube;

	printf("number\tsquare\tcube\n");
	for (i = 0; i <= 10; i++)
	{
		number = i;
		square = i*i;
		cube = i*i*i;
		printf("%d\t%d\t%d\n", number, square, cube);
	}
	system("pause");
	return 0;
}
