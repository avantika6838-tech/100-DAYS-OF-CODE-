// Search in a sorted array using binary search.
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int i,j,n,num,arr[20],flag=0;
    printf("Enter the total numbers you want: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want the index: ");
    scanf("%d",&n);
    for(i=0;i<num;i++)
    {
        if(arr[i]==n)
        {
            printf("Found at index: %d",i);
        
        flag=1;
       break;
        }
    }
    if(flag==0){
        printf("-1");
    }
    return 0;
}
