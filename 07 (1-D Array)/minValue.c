#include<stdio.h>
#include<limits.h>
int main(){
    int size , min = INT_MAX;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the array element in %d index : ", i);
        scanf("%d", &arr[i]);
    }
    // min = arr[0];
    for (int i=0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("The min number is : %d", min);

   return 0;
}