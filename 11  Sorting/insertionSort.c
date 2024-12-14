#include<stdio.h>
int main(){
    int n=7; 
    int arr[7] = {7,4,5,2,6,8,9};

    printf("The unsorted element is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    for(int i=1; i<n-1; i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("\n");
    printf("The sorted element is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

// Time complexity in Best case is o(n) and space complexity is o(1)
// Time complexity in Average case is o(n2) and space complexity is o(1)
// Time complexity in Worst case is o(n2) and space complexity is o(1)


// insertion sort is stable
// No of passes :- n-1 passes