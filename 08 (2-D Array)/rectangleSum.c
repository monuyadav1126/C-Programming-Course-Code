// Given a matrix ‘a’ of dimension n x m and 2
// coordinates (l1, r1) and (l2, r2). Return the sum of
// the rectangle from (l1,r1) to (l2, r2).

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
    printf("The Matrix is :\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf ("\n");
    }

    int sum =0;
    for(int i=0; i<m; i++){
        for(int j=1; j<n; j++){
            sum = sum + arr[i][j];
        }
    }
    printf("The sum of Matrix is : %d", sum);

}