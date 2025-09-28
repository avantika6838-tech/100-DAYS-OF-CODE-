/*DAY 11 OF C PROGRAMMING CODING 
 Write a program to find profit or loss percentage given cost price and selling price.*/
 
 #include <stdio.h>

int main() {
	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
	printf("\n-----------------------------------\n");    

    float costPrice, sellingPrice, amount, percentage;
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
