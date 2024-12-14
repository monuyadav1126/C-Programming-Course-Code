#include<stdio.h>
int main(){
    int size, sum=0;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the array element in %d index : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    printf("The sum of array is : %d", sum);
}