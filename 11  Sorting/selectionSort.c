#include<stdio.h>
#include<limits.h>
int main(){
    int n=7;
    int arr[7] = {7,4,5,9,8,2,1};
    printf("Unsorted Array is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int minIndex = -1;
        for(int j=i; j<=n-1; j++){
            if(min>arr[j]){
                min =arr[j];
                minIndex =j;
            }
        }
        // Swap the min and first element of unsorted part
        // swap minIndex and i
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("\n");

    printf("The sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


// Time complexity in Best case is o(n2) and space complexity is o(1)
// Time complexity in Average case is o(n2) and space complexity is o(1)
// Time complexity in Worst case is o(n2) and space complexity is o(1)


// Selection sort is unstable