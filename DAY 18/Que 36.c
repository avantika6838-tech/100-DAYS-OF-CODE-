/*DAY 18 OF C PROGRAMMING CODING 
Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h>

int main() {
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int num1, num2;
    printf("Enter the first positive integer: ");
    scanf("%d", &num1);
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; // Indicate an error
    }
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    printf("The HCF (GCD) of the two numbers is: %d\n", num1);

    return 0;
}
