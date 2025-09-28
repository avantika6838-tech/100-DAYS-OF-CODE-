/*DAY 19 OF C PROGRAMMING CODING 
 Write a program to find the sum of digits of a number.*/
#include <stdio.h>

int main() {
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10; 
        sum += digit;       
        number /= 10;    
    }
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
