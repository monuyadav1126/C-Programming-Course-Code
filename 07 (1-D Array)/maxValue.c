#include<stdio.h>
#include<limits.h>
int main(){
    int size , max = INT_MIN;
    int maxpos;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the array element in %d index : ", i);
        scanf("%d", &arr[i]);
    }
    // max = arr[0];
    for (int i=0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
            maxpos = i;
        }
    }
    printf("The max number is : %d\n And its index value is %d", max, maxpos);

   return 0;
}