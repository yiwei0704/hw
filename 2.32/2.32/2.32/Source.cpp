#include<stdio.h>
#include<stdlib.h>
int main() {
	float bmi, weight, high;
	printf("輸入你的身高(公尺) 體重(公斤)\n");
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
	printf("你的bmi值為:%f", bmi);
	system("pause");
	return 0;
}