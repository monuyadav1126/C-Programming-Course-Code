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
    // printf("The actual elements are : ");
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate number\n ", arr[i]);
                break;
            }
        }
    }
    return 0;
}    