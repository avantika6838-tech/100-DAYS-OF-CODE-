// Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>
int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int num, i, j,flag;

    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {      
        flag = 1;        
        
        for(j = 2; j*j <= i; j++) {  
            if(i % j == 0) {
                flag = 0;       
                break;
            }
        }
        if(flag==1) {
            printf("%d ",i);
        }
    }

    return 0;
}
