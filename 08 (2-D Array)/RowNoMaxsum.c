#include<stdio.h>
#include<limits.h>
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

    int maxSum =0;
    int maxRow =0;
    int rowSum =0;
    int i, j;
    for(i=0; i<m; i++){
        rowSum =0;
        for(j=0; j<n; j++){
            rowSum += arr[i][j];
            if(maxSum<rowSum){
                maxSum = rowSum;
                maxRow = i+1;
            }
        }
    }
    printf("The row with the maximum sum is : %d\n And the Row is : %d", maxSum, maxRow);

}