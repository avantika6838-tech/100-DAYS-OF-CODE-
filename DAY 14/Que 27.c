/* DAY 14 OF C PROGRAMMING CODING 
    Write a program to print the sum of the first n odd numbers.*/
    
    #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int n; 
    int sum = 0; 
    int i; 
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1; 
    }

    printf("The first %d odd numbers are: ", n);
    for (i = 0; i < n; i++) {
        int odd_number = 2 * i + 1; 
        printf("%d ", odd_number);
        sum += odd_number;
    }

    printf("\nThe sum of the first %d odd numbers is: %d\n", n, sum);

    return 0; 
}
