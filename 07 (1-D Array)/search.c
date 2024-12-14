#include<stdio.h>
#include<stdbool.h>
int main(){
    int size;
    int x = 12;
    int idx;
    bool flag = false; // false means the element is not present in array
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the element at index %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("The Actual elements are : ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
        if(arr[i]==x){
            flag = true; // True means the element is present in array
            idx = i;
            break;
        }
    }
    if(flag==false){
        printf("\nThe number %d is not present in array", x);
    }
    else{
        printf("\nThe number %d is present in array\n And its index value is %d : ", x, idx);
    }
    return 0;
}