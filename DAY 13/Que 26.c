/* DAY 13 OF C PROGRAMMING CODING 
   Write a program to print numbers from 1 to n.*/
   
   #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int n, i;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Numbers from 1 to %d are:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n"); 
    }

    return 0;
}
