// Search for an element in an array using linear search.
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int n,i,j,flag=0;
    int a[50];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to check: ");
    scanf("%d",&j);
    for(i=0;i<n;i++){
        if(j==a[i])
        {
            printf("Found at index %d",i);
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
            printf("-1");
        }
        
    
    return 0;
}
