/* DAY 16 OF C PROGRAMMING CODING
  Write a program to take a number as input and print its equivalent binary representation.*/
  
  #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int decimalNum;
    long long binaryNum = 0; 
    int remainder;
    int place = 1; 
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    if (decimalNum == 0) {
        printf("The binary equivalent is: 0\n");
        return 0;
    }
    while (decimalNum > 0) {
        remainder = decimalNum % 2; 
        binaryNum += remainder * place; 
        decimalNum /= 2; 
        place *= 10; 
    }
    printf("The binary equivalent is: %lld\n", binaryNum);

    return 0;
}
