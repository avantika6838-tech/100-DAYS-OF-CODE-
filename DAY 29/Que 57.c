
// Find the sum of array elements.
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int A[20],n,i,sum=0;
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){  
        scanf("%d",&A[i]);  // getting the values at the memory spaces
    }
  
    for(i=0;i<n;i++){
        sum=sum+A[i];
    }
    printf("Sum is: %d",sum);
    return 0;
   
}
