// Count characters in a string without using built-in length functions.
#include <stdio.h>
int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    char ch[20];
    int i, count = 0;

    printf("Enter your string: ");
    for(i=0;i<19;i++)  // this loop will take values for 19 spaces and checks if enter key has been pressed, if yes then break the loop else keep on counting
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='\n')
        {
            break;
        }
        else
        {
        count++;
        }
    }
    
    // it will give 1 output for empty string
    if(count == 0) {
        count = 1;
    }

    printf("Length of string is %d\n", count);

    return 0;
}
