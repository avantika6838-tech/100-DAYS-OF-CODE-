/* DAY 15 OF C PROGRAMMING CODING
 Write a program to calculate the factorial of a number.*/
 
   #include <stdio.h>
int main(){ 
    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    int f=1,i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=i*f;
        
    }
    printf("%d",f);
    return 0;
}
