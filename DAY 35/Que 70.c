// Rotate an array to the right by k positions.
#include<stdio.h>
   int main(){
   	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


       
    int arr[50],i,j,n,k,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    
     printf("Enter the elements: ");
     for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     printf("Enter the number of time you want to rotate: ");
    scanf("%d",&c);
    
    for(i=0,j=n-1;i<j;i++,j--)
     {                // reversing it using for loop this time 
         k=arr[i];
         arr[i]=arr[j];
         arr[j]=k;
     }
   c=c%n; // making it smaller if the number of times we have to rotate is bigger 
   for(i=0,j=c-1;i<j;i++,j--){  // reversing only the one less number of times we want to rotate
         k=arr[i];
         arr[i]=arr[j];
         arr[j]=k;
        // reversing the first k elements
   }
   
   for(i=c,j=n-1;i<j;i++,j--){
         k=arr[i];
         arr[i]=arr[j];
         arr[j]=k;
        // reversing the left over elements that will eventually give the desired answer
   }
   printf("Reverse of the number left over elements(final rotation): ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
   }
 

    return 0;
}
