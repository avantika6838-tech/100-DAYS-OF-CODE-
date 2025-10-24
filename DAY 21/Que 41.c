/*DAY 21 OF C PROGRAMMING CODING 
Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
#include <math.h> 
int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
   	printf("\n-----------------------------------\n");


    long long num, swappedNum;
    int firstDigit, lastDigit, digits = 0;
    long long tempNum;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) { 
        printf("Swapped number: 0\n");
        return 0;
    }

    lastDigit = num % 10;
    tempNum = num;
    while (tempNum > 0) { 
        tempNum /= 10;
        digits++;
    }

    firstDigit = num / (long long)pow(10, digits - 1);
    long long middlePart = (num % (long long)pow(10, digits - 1)) / 10;

    swappedNum = lastDigit * (long long)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("Swapped number: %lld\n", swappedNum);

    return 0;
}
