#include<stdio.h>
int main(){
    int n = 9;
    int arr[] = {5,0,2,3,0,0,4,0,1};
    printf("The unsorted element is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]==0){
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("The sorted element is : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}