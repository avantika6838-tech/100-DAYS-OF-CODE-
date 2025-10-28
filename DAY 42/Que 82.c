// Print each character of a string on a new line.
#include <stdio.h>
int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    char ch[20];
    int i;

    printf("Enter your string: ");
    for(i=0;i<19;i++)
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='\n')
        {
            break;
        }
        else
        {
            printf("%c\n",ch[i]);
        }
    }
   

    return 0;
}
