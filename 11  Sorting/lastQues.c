#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the minimum possible sum of two numbers
int minSumOfTwoNumbers(int arr[], int n) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);
    
    int num1 = 0, num2 = 0;
    
    // Form two numbers by distributing digits alternately
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + arr[i];
        } else {
            num2 = num2 * 10 + arr[i];
        }
    }
    
    // Return the sum of the two numbers
    return num1 + num2;
}

int main() {
    int arr[] = {5, 3, 0, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = minSumOfTwoNumbers(arr, n);
    printf("The minimum possible sum of two numbers is: %d\n", result);
    
    return 0;
}
