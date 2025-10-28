#include<stdio.h>
int main(){
 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int A[20],n,i,maximum,minimum;
    printf("Enter the number you want to add: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){  
        scanf("%d",&A[i]);  // getting the values at the memory spaces
    }
    maximum=A[0],minimum=A[0]; // initalizing maxinmum and minimum the first value of array element so that we can compare them with all.
    for(i=1;i<n;i++)
    {
        if(maximum<A[i])
        {
            maximum=A[i];
        }
   
        if(minimum>A[i])
        {
            minimum=A[i];
        }
}
    
    printf("Maximun number and minimum is:%d %d",maximum,minimum);
    
    return 0;
   
}
