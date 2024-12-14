#include<stdio.h>
int main(){
    int m;
    printf("Enter the size of row of 1st matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter the size of column of 1st matrix : ");
    scanf("%d", &n);
    int arr[m][n];
    for(int i=0; i<m; i++){
        printf("Enter the element for row %d\n", i+1);
        for(int j=0; j<n; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Method No.01
    printf("The 1st Method Matrix is : \n");
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                printf("%d ", arr[i][j]);
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    //Method No.02
    printf("The 2nd Method Matrix is : \n");
    for(int j=0; j<n; j++){
       if(j%2==0){
        for(int i=m-1; i>=0; i--){
            printf("%d ", arr[i][j]);
        }
       }
       else{
        for(int i=0; i<m; i++){
            printf("%d ", arr[i][j]);
        }
       }
        printf("\n");
    }


    //Method No.03
    printf("The 3rd Method Matrix is : \n");
    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                printf("%d ", arr[i][j]);
            }
        }
        else{
            for(int i=m-1; i>=0; i--){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    //Method No.04
    printf("The 4th Method Matrix is : \n");
    for(int i=m-1; i>=0; i--){
        if(i%2==0){
            for(int j=n-1; j>=0; j--){
                printf("%d ", arr[i][j]);
            }
        }
        else{
            for(int j=0; j<n; j++){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}    