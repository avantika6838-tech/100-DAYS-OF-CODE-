/*DAY 20 OF C PROGRAMMING CODING 
  Write a program to find the product of odd digits of a number.*/
  #include <stdio.h>

int main() {
        printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	  printf("\n-----------------------------------\n");

    int number, digit;
    long long productofodddigits = 1; 
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("The product of odd digits in 0 is 1 (no odd digits).\n");
        return 0;
    }
    if (number < 0) {
        number = -number; 
    }

    while (number > 0) {
        digit = number % 10; 
        if (digit % 2 != 0) { 
            productofodddigits *= digit; 
        }
        number /= 10; 
    }
    printf("The product of odd digits is: %lld\n", productofodddigits);

    return 0;
}
