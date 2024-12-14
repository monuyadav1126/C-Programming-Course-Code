#include<stdio.h>
int main(){
    int m, n;
    printf("Enter the size of row : ");
    scanf("%d", &m);
    printf("Enter the size of column : ");
    scanf("%d", &n);
    int arr1[m][n];

    printf("For Matrix 1 : \n");
    for(int i=0; i<m; i++){
        printf("Enter the row %d elements\n", i+1);
        for(int j=0; j<n; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &arr1[i][j]);
        }
    }
    // printf("The matrix of %dx%d is : \n", m,n);
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("%d ", arr1[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("for Matrix 2 : \n");
    int arr2[m][n];
    for(int i=0; i<m; i++){
        printf("Enter the row %d elements\n", i+1);
        for(int j=0; j<n; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &arr2[i][j]);
        }
    }
    // printf("The matrix of %dx%d is : \n", m,n);
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("%d ", arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    int result[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
        printf("\n");
    }
    printf("The resultant matrix is : \n");
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}