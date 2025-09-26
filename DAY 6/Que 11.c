/*Write a program to input an integer and check whether it is even or odd using if–else.*/

#include <stdio.h>

int main() {
	            printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
            	printf("\n-----------------------------------\n");    

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
      printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    return 0; 
}
