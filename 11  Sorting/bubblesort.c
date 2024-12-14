#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {5,3,7,2,8,1,9};
    int n = 7;
    for(int i=0; i<n-1; i++){
        bool flag = true; // Array is not sorted yet
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break; 
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


// Time complexity in Best case is o(n) and space complexity is o(1)
// Time complexity in Average case is o(n2) and space complexity is o(1)
// Time complexity in Worst case is o(n2) and space complexity is o(1)


// Bubble sort is stable