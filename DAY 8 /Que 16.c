/*DAY 8 OF C PROGRAMMING CODING 
Write a program to input three numbers and find the largest among them using if–else.*/

#include <stdio.h>

int main() {
	
            printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
        	printf("\n-----------------------------------\n");    

    int num1, num2, num3;
    printf("Enter first integers: ");
    scanf("%d", &num1);
    printf("Enter second integers: ");
    scanf("%d", &num2);
    printf("Enter third integers: ");
    scanf("%d", &num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }
    return 0; 
}
