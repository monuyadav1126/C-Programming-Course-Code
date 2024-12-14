#include<stdio.h>
int main(){
    int size;
    int sum1 = 0, sum2 = 0; 
    int missingidx = -1;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the element at index %d : ", i);
        scanf("%d", &arr[i]);
    }
    // The sum of n-1 element of array 
    for(int i=0; i<size-1; i++){
        sum1 = sum1 + arr[i];
    }
    // Using the sum formula upto N number element 
    // Formula :- sum of n = n(n+1)/2
    sum2 = (size*size+size)/2;

    missingidx = sum2 - sum1;
    for(int i=0; i<size; i++){
        if(arr[i]!=i+1){
            missingidx = i;
            break;
        }
    }
    printf("The missing element number is %d\n And its index value is %d ", sum2-sum1, missingidx);
    return 0;
}