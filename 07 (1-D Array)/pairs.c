#include<stdio.h>
int main (){
    int size, i, j;
    int totalpairs = 0;
    int x=12;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(i=0; i<size; i++){
        printf("Enter the number at index %d : ", i);
        scanf("%d", &arr[i]);

    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]+arr[j] == x){
                totalpairs++;
                printf("(%d, %d)", arr[i], arr[j]);
            }
        }
    }
    printf("\nThe pairs number is : %d ", totalpairs);
}