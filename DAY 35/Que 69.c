#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int i,n,arr[20],max_num,sec_max;
    printf("Enter the total numbers you want: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max_num=arr[0];

    for(i=0;i<n;i++){
        
        if(max_num<arr[i])
        {
            max_num=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if( arr[i]!=max_num && sec_max<arr[i]){
            sec_max=arr[i];
        }
    }
    printf("%d is second largest",sec_max);
    
    return 0;
}
