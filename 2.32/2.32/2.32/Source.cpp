#include<stdio.h>
#include<stdlib.h>
int main() {
	float bmi, weight, high;
	printf("��J�A������(����) �魫(����)\n");
	scanf_s("%f %f", &high, &weight);
	bmi = weight / (high*high);
	if (bmi <= 18.5) {
		printf("Underweight\n");
	}
	if (18.5< bmi && bmi<= 24.9) {
		printf("Normal\n");
	}
	if (25 <= bmi && bmi <= 29.9) {
		printf("Overweight\n");
	}
	if (bmi >= 30) {
		printf("Obese\n");
	}
	printf("�A��bmi�Ȭ�:%f", bmi);
	system("pause");
	return 0;
}