// Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*



#include<stdio.h>
int main()
{
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");



 int i,j,z;
// for the upper portion the stars are in odd number so,used 2*i-1 and according to the number of rows and stars and the formula for odd number I used the loop 
  for(i=1;i<=3;i++){
      z=2*i-1;
      for(j=1;j<=z;j++){
          printf("*\n");
      }
      printf("\n");
  }
  // for the lower portion the rows are decreasing so used i-- and according to the formula i used the condition of i>=1
  for(i=2;i>=1;i--){
      z=2*i-1;
      for(j=1;j<=z;j++){
          printf("*\n");
      }
      printf("\n");
      
  }
   
    return 0;
    
}
