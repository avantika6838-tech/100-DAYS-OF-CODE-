// Insert an element in an array at a given position.

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
    printf("Enter the index where you want to add and number you want to add: ");
    scanf("%d %d",&k,&n);
    for(i=0;i<num;i++){
        
          for(j = num; j > i+k; j--) // shifting the array to the right untill the insertion place will come that if i=0 and index to insert is 2 that 0+2 place, loop will untill we make the arr[2] emty by shifting them one by one
          {
                arr[j] = arr[j-1]; 
            }
            arr[i+k]=n;  // adding the number at i+k index,as if we have i=0 and we want to add at 2nd index so, it will be 0+2=2 so 3rd index;  than after shifting i+k space we will add the element to that particular place 
            break;
        
       
    }
    num++; // increasing the value of original num by 1 so that the extra space created above can increase and attain the last value
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);  // printing the new array
    }
    return 0;
}
