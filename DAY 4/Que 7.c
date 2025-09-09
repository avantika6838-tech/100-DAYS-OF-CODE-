/* DAY 4 OF C PROGRAMMING CODING
 Write a program to swap two numbers without using a third variable.*/

#include <stdio.h>

int main() 


{
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");


	int a,b;
	printf("Enter the number for a: ");
	scanf("%d",&a);
	printf("Enter the number for b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value for a and b after swapping is : %d,%d", a,b);
	return 0;

}


