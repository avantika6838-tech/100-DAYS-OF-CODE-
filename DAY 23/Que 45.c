/*DAY 23 OF C PROGRAMMING CODING 
 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
#include<stdio.h>
int main(){
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");


    int num,i;
    float y,sum=0;
    printf("Enter a number until which you need to count: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        y=(2.0*i)/(4.0*i-1);  
        sum=sum+y;
    }
    printf("The sum of the series is: %0.2f",sum);
    return 0;
}

