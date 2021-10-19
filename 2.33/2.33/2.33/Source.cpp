#include<stdio.h>
#include<stdlib.h>
int main() {
	float a, b, c, d, e, total;
	printf("每天行駛里程\n");
	scanf_s("%f", &a);
	printf("每加侖汽油的價格\n");
	scanf_s("%f", &b);
	printf("每加侖汽油行駛里程數\n");
	scanf_s("%f", &c);
	printf("每天的停車費\n");
	scanf_s("%f", &d);
	printf("每天過路費\n");
	scanf_s("%f", &e);
	total = (a/c)*b+c+d;
	printf("花費總和%2f\n",total);
	system("pause");
	return 0;
}