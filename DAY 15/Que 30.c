/* DAY 15 OF C PROGRAMMING CODING
 Write a program to reverse a given number.*/
 #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;         
        reversedNum = reversedNum * 10 + remainder; 
        num = num / 10;                
    }
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
