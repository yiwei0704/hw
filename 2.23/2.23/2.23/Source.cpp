#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num1, num2, num3, max, min;
	printf("��J�T�Ӿ��\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2){
		max = num1;
	}
	else {
		max = num2;
	}
	if (num3 > max){
		max = num3;
	}
	if (num1 < num2){
		min = num1;
	}
	else{
		min = num2;
	}
	if (num3 < min){
		min = num3;
	}
	printf("�̤j��:%d", max);
	printf("�̤p��:%d", min);
	system("pause");
	return 0;
}