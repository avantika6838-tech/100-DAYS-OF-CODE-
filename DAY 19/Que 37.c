/*DAY 19 OF C PROGRAMMING CODING 
 Write a program to find the LCM of two numbers.*/
 #include <stdio.h>

int main() {
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int num1, num2, max, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    for (lcm = max; ; lcm += max) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }
    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
