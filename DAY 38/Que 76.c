// check if matrix is symmetric
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int v[20][20],flag=1;
    int i,j,m,n;
    printf("Enter the value for size of matrix1: ");
    scanf("%d %d",&m,&n);
    // to check if its a square matrix to find the symmetry
     if(m != n) {
        printf("Matrix is not symmetric (not a square matrix).\n");
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
       for(j=0;j<n;j++) 
       {
       if(v[i][j]!=v[j][i])  // checking if we have transpose of matrix and its now same than the another variable flag will become 0 and loop will break.
       {
           flag=0;
           break;
       }
       if (flag==0)
       {
           break;
       }
      
        }
   }
   if(flag==1)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }

    return 0;
}
