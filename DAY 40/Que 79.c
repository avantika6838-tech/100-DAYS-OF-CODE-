//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
	 printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");


    int r, c, a[100][100];
    int i, j, k;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r,&c);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal Output:\n");
    for (k = 0; k <= r + c - 2; k++) {
        if (k % 2 == 0) {
            for (i = (k < r ? k : r - 1); i >= 0; i--) {
                j = k - i;
                if (j >= 0 && j < c)
                    printf("%d ", a[i][j]);
            }
        } else {
            for (i = 0; i <= k; i++) {
                j = k - i;
                if (i < r && j >= 0 && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
