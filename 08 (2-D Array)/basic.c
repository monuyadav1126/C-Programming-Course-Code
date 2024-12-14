#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the size of row");
    scanf("%d", &m);
    printf("Enter the size of column");
    scanf("%d", &n);
    int arr[m][n]; // Declare a 3x3 array

    // Prompt the user to enter elements for each row and column
    for (int i = 0; i < m; i++) {
        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            printf("Enter the element at column %d: ", j + 1);
            scanf("%d", &arr[i][j]); // Store the user input in the array
        }
    }

    // Display the 3x3 matrix
    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
