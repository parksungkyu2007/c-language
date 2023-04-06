#include <stdio.h>
int main()
{
	int num1=16;
	int num2;
	int sum=0; int sub=0; int div=0; float mul=0;
	num2 = 61;
	sum = num1 + num2;
	sub = num1 - num2;
	div = num1 * num2;
	mul = (float)num1 / (float)num2;
	printf("%d + %d = %d\n",num1 ,num2 ,sum);
    printf("%d - %d = %d\n",num1 ,num2 ,sub);
	printf("%d * %d = %d\n",num1 ,num2 ,div);
	printf("%d / %d = %d\n",num1 ,num2 ,mul);
	
	
return 0;
}