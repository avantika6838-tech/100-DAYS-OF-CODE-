#include <stdio.h>

int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int n1,n2,i,j,arr[20],mergedarr[30],ar2[20];
    // input for the first array
    printf("Enter the number of elements in 1st set: ");
    scanf("%d", &n1);
    
    printf("Enter the elements: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
    // taking input for the 2nd array
     printf("Enter the number of elements in 2nd set: ");
    scanf("%d", &n2);
    
     printf("Enter the 2nd set of elements: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &ar2[i]);
    }
    
    // here we will copy the elements of first array to new array named mergedarr[] from the 0th index
    for(i=0;i<n1;i++){
        mergedarr[i]=arr[i];
    }
    // now, here again, we will copy the elements of 2nd array,but at this from the index where the array 1 had left like if i had taken 3 element in array 1 going to 0 1 2 position so than 3+0 mergedarr[3]=first element of array 2 going to the 4th position of mergedarr[] 
    for(i=0;i<n2;i++){
        mergedarr[n1+i]=ar2[i];
    }
    // printing of the array with the condition of i<n1+n2
    printf("\nMerged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedarr[i]);
    }

    return 0;
}
