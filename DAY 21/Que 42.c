/*DAY 21 OF C PROGRAMMING CODING 
Write a program to check if a number is a perfect number.*/
#include<stdio.h>
int main(){
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");


    int i,num,a=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            a=a+i;
        }
    }

    if(a==num){
        printf("Perfect Number");
    }
    else{
        printf("Not perfect number");
    }
    return 0;
}
