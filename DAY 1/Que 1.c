/*DAY 1 C CODING
Write a program to input two numbers and display their sum.*/
#include <stdio.h>
int main() 
{
	
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");

    int c,d,S;
    printf("Give the number for c= ");
    scanf(" %d", &c);
    printf("Give the number for d= ");
    scanf(" %d", &d);
    S=c+d;
    // printf("addition of %d and %d is %d",c,d,S)
    printf("Sum=%d",S); 
    return 0;
}
