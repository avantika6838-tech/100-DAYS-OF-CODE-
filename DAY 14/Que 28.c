/* DAY 14 OF C PROGRAMMING CODING 
   Write a program to print the product of even numbers from 1 to n.*/
   
   #include <stdio.h>

int main() {
	
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int n, i;
    long long product = 1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("There are no even numbers to multiply in the range 1 to %d.\n", n);
        return 0;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
