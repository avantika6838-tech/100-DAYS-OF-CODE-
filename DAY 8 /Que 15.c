/* DAY 8 OF C PROGRAMMING CODING 
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character*/


#include <stdio.h>

int main() {
	        printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
           	printf("\n-----------------------------------\n");    

    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
