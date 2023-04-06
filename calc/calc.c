#include<stdio.h>
float add() {
	float sum =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : ");	scanf("%f", &num1);
	printf("두번째 숫자 입력 : ");	scanf("%f", &num2);
	sum = num1 + num2;	
	return sum ;
}

float sub() {
	float result =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : ");	scanf("%f", &num1);
	printf("두번째 숫자 입력 : ");	scanf("%f", &num2);
	result = num1 - num2;
	return result;
}

float div() {
	float result =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : ");	scanf("%f", &num1);
	printf("두번째 숫자 입력 : ");	scanf("%f", &num2);
	result = num1 / num2;
	
	return result;
}

float mul() {
	float result =0, num1=0, num2=0;
	printf("첫번째 숫자 입력 : ");	scanf("%f", &num1);
	printf("두번째 숫자 입력 : ");	scanf("%f", &num2);
	result = num1 * num2;
	
	return result;
}

int main() {
	printf("덧셈결과 : %f\n", add());
	printf("뺄셈결과 : %f\n", sub());
	printf("나눗셈 결과 : %f\n", div());
	printf("곱셈결과 : %f\n", mul());
}