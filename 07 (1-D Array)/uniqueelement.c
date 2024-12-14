#include<stdio.h>
#include<stdbool.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the number at index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The unique element is : ");
    for(int i=0; i<size; i++){
        bool flag = false;
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}    