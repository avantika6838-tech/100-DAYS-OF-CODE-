/*DAY 25 OF C PROGRAMMING CODING
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
    */

#include<stdio.h>
int main(){
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int i,j,k;
 
    for(i=1;i<=5;i++)
    {
        for(k=1;k<i;k++)  
        {
            printf(" ",k); 
        }
      
        for(j=i;j<=5;j++)
        { 
            printf("*",j);
            
        }
    printf("\n");
  
    }
    return 0;
    
}
