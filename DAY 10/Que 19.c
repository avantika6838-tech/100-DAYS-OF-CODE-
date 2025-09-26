/*DAY 10 OF C PROGRAMMING CODING
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

#include <stdio.h>

int main() {
	            printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
             	printf("\n-----------------------------------\n");    

    int side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check for triangle validity (optional but good practice)
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("The given side lengths do not form a valid triangle.\n");
    } else {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    }

    return 0;
}
