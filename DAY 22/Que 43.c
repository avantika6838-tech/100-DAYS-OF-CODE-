/*DAY 22 OF C PROGRAMMING CODING 
Write a program to check if a number is a strong number.*/

 #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    printf("\n-----------------------------------\n");


    int x,num,y,j,sum=0,fact;
    printf("Enter a number: ");
    scanf("%d",&num);
    x=num;
    while(x>0){
        y=x%10; 
        fact=1;
        for(j=1;j<=y;j++){
            fact=fact*j;
            
        }
        sum=fact+sum;
        x=x/10;  
    }
    if(num==sum){
        printf("Number is strong\n");
    }
    else{
        printf("Number is not strong\n");
    }

    return 0;
}
