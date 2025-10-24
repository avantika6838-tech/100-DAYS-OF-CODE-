/*DAY 22 OF C PROGRAMMING CODING 
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/
#include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
   	printf("\n-----------------------------------\n");


    int i,num,x;
    float y,sum=1;
    printf("Enter the count you need sum: \n");
    scanf("%d",&num);
    
    for(i=2;i<=num;i++)
    {
        y=(2.0*i-1)/(2.0*i);
      sum=sum+y;
    }
    printf("sum is: %0.2f",sum);
    return 0;
}
