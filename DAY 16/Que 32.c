 /* DAY 16 OF C PROGRAMMING CODING
  Write a program to check if a number is a palindrome.*/
  
  
#include <stdio.h>
int main()
{
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int p=0,n,x,y,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
    x=n%10; // will give the one digit out of the whole n number
    p=p*10+x;  // this will give me the next forward numbers
    n=n/10;  // this will give the new n value to be used in x
    }
    if(temp==p)
    {
         printf("it is palindrome number");
    }
    else{
        printf("it is not palindrome number");
        }
    return 0;
}
