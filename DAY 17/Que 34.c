/* DAY 17 OF C PROGRAMMING CODING
  Write a program to check if a number is prime.*/
  #include <stdio.h>
int main(){
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int i,n,c=0; 
    printf("Enter a number: ");
    scanf("%d",&n);

  for (i=2;i<n;i++)
    {
        if(n%i==0) 
        {
        c++; 
        break; 
        }
    }
    if(c==0){
        printf("Number is prime");
    }
    else {
        printf("NUmber is not prime");
    }
    
   
    return 0;
}
