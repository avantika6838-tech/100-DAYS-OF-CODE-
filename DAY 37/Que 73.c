// Find the sum of each row of a matrix and store it in an array 
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int a[20][20];
    int i,j,m,n,rsum[20];
    printf("Enter the value for size of matrix: ");
    scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)  // starting the loop with the row =0 
   {
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       scanf("%d",&a[i][j]);
       }
   }
   
   printf("Sum of the matrix row by row is: ");
   for(i=0;i<m;i++)  // starting the loop with the row =0 
   { int sum=0;
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       sum=sum+a[i][j];
       }
       rsum[i]=sum;
     
   }
   for(i=0;i<m;i++){
       printf("%d ",rsum[i]);
   }
  
   
    return 0;
}

