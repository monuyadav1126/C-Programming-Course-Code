#include<stdio.h>
int main(){
    int size;
    int sumEven=0;
    int sumodd=0;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the number in %d index : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        if(i%2==0){
            sumEven = sumEven + arr[i];
        }
        else{
           sumodd = sumodd + arr[i];
        }
    }
    printf("The difference between sumEven and sumodd is %d :", sumEven-sumodd);
}