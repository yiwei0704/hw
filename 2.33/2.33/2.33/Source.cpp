#include<stdio.h>
#include<stdlib.h>
int main() {
	float a, b, c, d, e, total;
	printf("�C�Ѧ�p���{\n");
	scanf_s("%f", &a);
	printf("�C�[�ڨT�o������\n");
	scanf_s("%f", &b);
	printf("�C�[�ڨT�o��p���{��\n");
	scanf_s("%f", &c);
	printf("�C�Ѫ������O\n");
	scanf_s("%f", &d);
	printf("�C�ѹL���O\n");
	scanf_s("%f", &e);
	total = (a/c)*b+c+d;
	printf("��O�`�M%2f\n",total);
	system("pause");
	return 0;
}