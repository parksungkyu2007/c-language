#include <stdio.h>

int main() {
	float height = 173.5;
	float weight = 53.7;
	float bmi = 0;
	height = height * 0.01; //cm -2 m 변환
	bmi = weight / (height * height);
	printf("당신의 BMI : N,2f\n", bmi);
	return 0;
}