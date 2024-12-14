#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the size of row : ");
    scanf("%d" , &m);
    printf("Enter the size of column : ");
    scanf("%d", &n);

    int arr[m][n];
    for(int i=0; i<m; i++){
        printf("Enter the element for row %d :\n", i+1);
        for(int j=0; j<n; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Actual Matrix is :\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf ("\n");
    }

    int brr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            brr[i][j] = arr[j][i];
        }
    }
   printf("\nThe transpose matrix is : \n");
   for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
        printf("%d ", brr[i][j]);
    }
    printf("\n");
   }
}