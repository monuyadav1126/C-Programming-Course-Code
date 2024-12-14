#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("Enter the array element in %d Index : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Your Entered arr element number is : ");

    for(int i=0; i<=4 ; i++){
        printf("%d ", arr[i]);
    }

    printf("\nYour reverse array element number is : ");
    for(int i=4; i>=0 ; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}