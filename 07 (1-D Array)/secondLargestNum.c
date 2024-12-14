#include<stdio.h>
#include<limits.h>
int main(){
    int size, max = INT_MIN;
    int maxpos, secondmaxPos;
    int secondmax = INT_MIN;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    if(size>2){

        int arr[size];
        for(int i=0; i<size; i++){
            printf("Enter the number at index %d : ", i);
            scanf("%d", &arr[i]);
        }
        
        // First Method ->
        // for(int i=0; i<size; i++){
        //     if(max<arr[i]){
        //         max = arr[i];
        //         maxpos = i;
        //     }
            
        // }
        // printf("The First largest number is : %d\n And its index value is : %d ", max, maxpos);

        // for(int i=0; i<size; i++){
        //     if (secondmax < arr[i] && arr[i]!=max){
        //         secondmax = arr[i];
        //         secondmaxPos = i;
        //     }
        // }
        //  printf("\nThe second largest number is : %d\n And its index value is : %d ", secondmax, secondmaxPos);


        // Second Method ->
        for(int i=0; i<size; i++){
            if(max<arr[i]){
                secondmax = max;
                secondmaxPos = maxpos;
                max = arr[i];
                maxpos = i;
            }
            else if(secondmax<arr[i] && max!=arr[i]){
                secondmax = arr[i];
                secondmaxPos = i;
            }
        }
        printf("The second largest number is : %d\n And its index value is : %d ", secondmax, secondmaxPos);
    }
    else{
        printf("please enter the Valid size of array more then two");
    }

    return 0;
}