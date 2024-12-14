#include<stdio.h>
int main (){
    int n=9; 
    int arr[9] ={6,5,3,7,4,2,9,8,1};

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int k=3;
    printf("%d ", arr[k-1]);
    return 0;
}



// Method 2:
// #include <stdio.h>

// // Function to perform partition in Quick Sort
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high]; // Choose the last element as pivot
//     int i = (low - 1);

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             // Swap arr[i] and arr[j]
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     // Swap arr[i+1] and pivot (arr[high])
//     int temp = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = temp;
//     return (i + 1);
// }

// // Quick Sort function
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1); // Sort elements before partition
//         quickSort(arr, pi + 1, high); // Sort elements after partition
//     }
// }

// int main() {
//     int n = 9; 
//     int arr[9] = {6, 5, 3, 7, 4, 2, 9, 8, 1};

//     // Perform Quick Sort
//     quickSort(arr, 0, n - 1);

//     // Print the sorted array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     int k = 3;
//     // Output the k-th smallest element
//     if (k > 0 && k <= n) {
//         printf("The %d-th smallest element is: %d\n", k, arr[k - 1]);
//     } else {
//         printf("k is out of bounds.\n");
//     }

//     return 0;
// }
