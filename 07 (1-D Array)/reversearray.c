#include<stdio.h>
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

    printf("\nThe reverse elements are : ");
    for(int i=size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}