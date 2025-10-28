// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int n, i = 0, arr[20], count = 0;
    int freq[10] = {0};   // for digits 0–9 
    int maxCount = 0, mostFreqDigit = 0; // putting the most frequent digit =0

    printf("Enter the number: ");
    scanf("%d", &n);

    int temp = n;  // copy of n

    // Extract digits into arr[]
    while(temp > 0) {
        arr[i] = temp % 10;
        temp = temp / 10;
        i++;
        count++;
    }

    //  Count frequencies 
     
    for(i = 0; i < count; i++) {
        freq[arr[i]]++; // counting the frequency of the arr[i] that will be eventually the index for freq[i], so it will directly increase the frequency of that element at that index
    }

    // Step 3: Print frequencies & find max
    for(i = 0; i < 10; i++)
    {
        if(freq[i] > 0) 
        {
            printf("%d occurs %d times\n", i, freq[i]);
            if(freq[i] > maxCount) // we will checking the max count of all the elements and comparing it with 0 and assigning the new values to max count if any count is greater than previous maxcount
            {
                maxCount = freq[i];
                mostFreqDigit = i;
            }
        }
    }

    // Step 4: Print most frequent digit
    printf("Digit occurring most times: %d \n", mostFreqDigit);

    return 0;
}
