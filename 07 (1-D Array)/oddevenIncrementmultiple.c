#include<stdio.h>
int main (){
    int size;
    printf("Enter the size of arr : ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the arr element in %d index : ",i);
        scanf("%d", &arr[i]);
    }
    printf("The Element of array is : ");
    for(int i=0; i<size; i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
            printf("%d ", arr[i]);
        }
        else{
            arr[i] = arr[i] * 2;
            printf("%d ", arr[i]);
        }
    }
    return 0;
}