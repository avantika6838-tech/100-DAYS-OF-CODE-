/* DAY 4 OF C PROGRAMMING CODING
Write a program to find and display the sum of the first n natural numbers.*/


 #include <stdio.h>
int main()
{
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");

    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=(n*(n+1))/2;
    printf("Value of %d natural number: %d",n,i);
    return 0;
}
