/* Day 3 of 100 days of c
 Write a program to swap two numbers using a third variable.*/
 
 
#include <stdio.h> 
int main()
{ 

    printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");

    int a,b,c;
printf("Enter value of a: "); 
scanf("%d",&a); 
printf("Enter value of b: "); 
scanf("%d",&b);
c=a;  // assigning the value of a to c 
a=b;  // assigning the value of b to a
b=c;  // assignig the value of c to b
printf("a=%d,b=%d",a,b); 
return 0; 
    
}
 	
