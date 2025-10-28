//Delete an element from an array. 
#include<stdio.h>
int main(){
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int i,j,n,num,arr[20],k;
    printf("Enter the total numbers you want: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index where you want to delete ");
    scanf("%d",&k);
    for(i=k;i<num-1;i++) /* Shift all elements after index k one position to                      the left.
                          We loop until i < num - 1 because arr[i+1] must be a valid index
                         If we used i < num, arr[i+1] would access arr[num], which is out of bounds */
    {
       arr[i]=arr[i+1]; // because if i have k=4 and num=5 and i am shifting towards left than at index arr[4] = arr[4+1] that arr[5] we should have something,but if i use i<num than it wouldn't have anything to put at arr[4] and in num-1 it would be i<5-1=4 so, it wouldn't go beyond
                
       
    }
    num--; // decreasing the value of original num by 1 so that the space at the last can be avoided above can be decreased and attain the last value
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);  // printing the new array
    }
    return 0;
}
