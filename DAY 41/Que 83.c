// Count vowels and Consonants in a string
#include <stdio.h>
int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    char ch[20];
    int v,countv=0,countc=0;

    printf("Enter your string: ");
    for(v=0;v<19;v++)
    {
        scanf("%c",&ch[v]);
        if(ch[v]=='\n')
        {
            break;
        }
        if(ch[v]>='a' && ch[v]<='z' || ch[v]>='A' && ch[v]<='Z')
        {
            if(ch[v]=='a'|| ch[v]=='A'|| ch[v]=='e'|| ch[v]=='E'|| ch[v]=='i'|| ch[v]=='I'|| ch[v]=='o'|| ch[v]=='O'|| ch[v]=='u' || ch[v]=='U')
            {
             countv++;
             }
            else
            {
            countc++;
            }
        }
    }
    printf("Vowels=%d,Consonants=%d",countv,countc);
    return 0;
}
