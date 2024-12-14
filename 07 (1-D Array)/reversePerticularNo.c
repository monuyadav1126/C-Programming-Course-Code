#include<stdio.h>
void reverse(int arr[], int a, int b){
    int i, j;
    for(i=a, j=b; i<j; i++, j--){
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
    reverse(arr, 1, 4);
    printf("\nThe reversable elements are : ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}