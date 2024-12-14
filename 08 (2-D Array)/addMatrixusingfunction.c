#include<stdio.h>
void inputMatrix(int m, int n, int arr[m][n], int matrixNumber){
    printf("Enter the element for Matrix %d : \n", matrixNumber);
    for(int i=0; i<m; i++){
        printf("Enter the element for row %d : \n", i+1);
        for(int j=0; j<n; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}
void printMatrix(int m, int n, int arr[m][n]){
    printf("The Matrix is : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void AddMatrix(int m, int n, int arr1[m][n], int arr2[m][n], int result[m][n]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main(){
    int m , n;
    printf("Enter the size of row : ");
    scanf("%d", &m);
    printf("Enter the size of column : ");
    scanf("%d", &n);
    int arr1[m][n], arr2[m][n], result[m][n];
    inputMatrix(m, n, arr1, 1);
    inputMatrix(m, n, arr2, 2);

    printf("Matrix 1 :\n");
    printMatrix(m, n, arr1);

    printf("Matrix 2 :\n");
    printMatrix(m, n, arr2);

    AddMatrix(m, n, arr1, arr2, result);

    printf("The resultant Matrix is : \n");
    printMatrix(m, n, result);
    
}