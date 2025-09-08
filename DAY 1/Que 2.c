/*DAY 1 OF C PROGRAMMING CODING
 Write a program to input two numbers and display their sum, difference, product, and quotient.*/


#include<stdio.h>
int main()
{
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");

	int num1,num2;
	int sum,sub,mul;
	float div;
	printf("Enter the value:");
	scanf("%d",&num1);
	printf("Enter the value:");
	scanf("%d",&num2);
	
	sum = num1+num2;
	sub = num1-num2;
	mul = num1*num2;
	div = num1/num2;
	
	printf("sum = %d\n",sum);
	printf("sub = %d\n",sub);
	printf("mul = %d\n",mul);
	printf("div = %f\n",div);
	 
	 return 0;
}

