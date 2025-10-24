/*DAY 24 OF C PROGRAMMING CODING 
  Write a program to print the following pattern:
*
**
***
****
*****
*/
#include<stdio.h>
int main(){
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ",j);
        }
        printf("\n");
    }
    return 0;
}
