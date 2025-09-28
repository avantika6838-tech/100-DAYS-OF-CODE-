/*DAY 20 OF C PROGRAMMING CODING 
Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
#include <math.h> 

int main() {
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    int num_bits;
    if (num == 0) {
        num_bits = 1; // 0 needs 1 bit
    } else {
        num_bits = floor(log2(num)) + 1;
    }
    int mask = (1 << num_bits) - 1;
    int ones_complement = num ^ mask;

    printf("Original number: %d (Binary: ", num);\
    for (int i = num_bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf(")\n");

    printf("1's complement: %d (Binary: ", ones_complement);
    for (int i = num_bits - 1; i >= 0; i--) {
        printf("%d", (ones_complement >> i) & 1);
    }
    printf(")\n");

    return 0;
}
