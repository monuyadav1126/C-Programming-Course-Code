#include<stdio.h>

// void reverse(int arr[], int size){
//     int i=0;
//     int j=size;
//     while(i<j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }

void reverse(int arr[], int size){
    int i, j;
    for(i=0, j=size; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the number at index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The actual elements are : ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    reverse(arr, size);
    printf("\nThe reverse elements are : ");
    for(int i=1; i<=size; i++){
        printf("%d ", arr[i]);
    }
    // for(int i=size-1; i>=0; i--){
    //     printf("%d ", arr[i]);
    // }
    return 0;
}