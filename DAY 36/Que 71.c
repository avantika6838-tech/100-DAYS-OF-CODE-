// Read and print a matrix
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int a[20][20];
    int i,j,m,n;
    printf("Enter the value for size of matrix: ");
    scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)  // starting the loop with the row =0 
   {
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       scanf("%d",&a[i][j]);
       }
   }
   printf("Matrix is: \n");
   for(i=0;i<m;i++)  
   {
       for(j=0;j<n;j++) 
       {
       printf("%d ",a[i][j]); // printing the matrix one by one with the help of loop
       }
       printf("\n");
       
   }
   
    return 0;
}
