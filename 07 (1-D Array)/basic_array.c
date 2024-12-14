#include<stdio.h>
int main (){
    // int arr[5] = {2, 4, 6, 8, 1};
    // printf("%d", arr[3]);

    // float arr[3] = {2.3, 4.5, 3.3};
    // printf("%f", arr[2]);

    // char arr[3] = {'a', 'b', 'c'};
    // printf("%c", arr[2]);

    // int arr[5] = {2,4,5,6,9};
    // for (int i=0; i<=4; i++){
    //     printf("%d ", arr[i]);
    // }


    int arr[5];
    for(int i=0; i<=4; i++){
        printf("Enter the arr element in %d Index  : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Your arr Entered element is : ");
    for(int i=0; i<5; i++){
    printf("%d ", arr[i]);
    }
    return 0;
}