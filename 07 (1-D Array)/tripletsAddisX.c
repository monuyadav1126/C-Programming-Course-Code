#include<stdio.h>
int main (){
    int size, i, j,k;
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
            for(k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    totalpairs++;
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("\nThe pairs number is : %d ", totalpairs);
}