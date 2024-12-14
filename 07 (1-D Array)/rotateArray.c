#include<stdio.h>
void reverse(int arr[], int start, int end){
    int i, j;
    for(i=start, j=end; i<j; i++, j--){
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
    int k=2; // You can take anythings 
    // k = k%size;
    reverse(arr, 0, size-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, size-1);
    printf("\nThe rotated elements are : ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}