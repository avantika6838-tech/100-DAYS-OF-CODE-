// Read and print elements of a one-dimensional array.
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int A[20],n,i;
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){  
        scanf("%d",&A[i]);  // getting the values at the memory spaces
    }
    printf("The numbers are: "); // printing the numbers from the array one by one
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}
