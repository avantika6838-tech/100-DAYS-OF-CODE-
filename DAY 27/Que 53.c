// Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


#include<stdio.h>
int main()
{
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");



 int i,j,z;
  for(i=1;i<=5;i++){
      z=2*i-1;
      for(j=1;j<=z;j++){
          printf("*");
      }
      printf("\n");
  }
  // for the lower portion
  for(i=4;i>=1;i--){
      z=2*i-1;
      for(j=1;j<=z;j++){
          printf("*");
      }
      printf("\n");
      
  }
   
    return 0;
    
}
