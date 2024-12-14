#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The actual elements are : ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    int palindrome = 1; // Assume the array is a palindrome

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            palindrome = 0; // Not a palindrome
            break;
        }
    }

    if (palindrome) {
        printf("This is a palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}
