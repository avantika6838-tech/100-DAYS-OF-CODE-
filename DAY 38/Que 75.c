// add two matrices
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int v[20][20],u[20][20],c[20][20];
    int i,j,m,n;
    printf("Enter the value for size of matrix1: ");
    scanf("%d %d",&m,&n);
    
   for(i=0;i<m;i++)  // starting the loop with the row =0 fo matrix 1 
   {
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       scanf("%d",&v[i][j]);
       }
   }
for(i=0;i<m;i++)  // starting the loop with the row =0 fo matrix 2
   {
       for(j=0;j<n;j++) 
       {
       scanf("%d",&u[i][j]);
       }
   }
   for(i=0;i<m;i++) // starting the loop with the row =0 fo matrix in which the output will be stored
   {
     for(j=0;j<n;j++) 
       {
       c[i][j]=v[i][j]+u[i][j]; // storing the sum in another matrix
       }  
   }
   for(i=0;i<m;i++)
   { // printing the matrix elements
     for(j=0;j<n;j++) 
       {
       printf("%d ",c[i][j]);
       } 
       printf("\n");
   }
  
    return 0;
}

