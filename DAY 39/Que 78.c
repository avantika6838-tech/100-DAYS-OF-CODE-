// Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int v[20][20],sum=0;
    int i,j,m,n;
    printf("Enter the value for size of matrix1: ");
    scanf("%d %d",&m,&n);
if(m != n){
        printf("Not a square matrix, no main diagonal.\n");
        return 0;
    }
     
   for(i=0;i<m;i++)  // starting the loop with the row =0 fo matrix 1 
   {
       for(j=0;j<n;j++) // going inside and getting the value of column=0
       {
       scanf("%d",&v[i][j]);
       }
   }
for(i=0;i<m;i++) 
   {
       sum=sum+v[i][i];
   }
   printf("Sum of diagonal is: %d",sum);

    return 0;
}
