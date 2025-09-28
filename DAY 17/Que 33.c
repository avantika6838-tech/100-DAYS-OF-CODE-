/* DAY 17 OF C PROGRAMMING CODING
 Write a program to check if a number is an Armstrong number.*/
 
 #include <stdio.h>
#include <math.h>
int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int n,y=0,x,m,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    m=n;  
  while(m>0){
      m=m/10; 
      count++; 
  }
  m=n; 
    while(m>0){
        x=m%10;
        y=y+pow(x,count);  
        m=m/10;  
        
    }
    if(n==y)
    {
        printf("number is armstrong number");
    }
    else
    {
        printf("number not armstrong");
        
    }
    
    return 0;
}

