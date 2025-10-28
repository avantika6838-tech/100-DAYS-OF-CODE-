// Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    char ch[20];
    int v;

    printf("Enter your string: ");
    for(v=0;v<19;v++)
    {
        scanf("%c",&ch[v]);
        if(ch[v]=='\n')
        {
            break;
        }
        if(ch[v]>='a' && ch[v]<='z')
        {
           ch[v]= ch[v]-32; // gives the ascii value of Uppercase alphabet as the difference between lowercase and upper case is 32, so subtracting the lowercase by 32 will give uppercase.
        }
    }
     ch[v] = '\0';
    printf("%s\n",ch); // printing the full string at once so used ch without [v], if wanted to print character by character use %c along with ch[v].
    
    return 0;
}
