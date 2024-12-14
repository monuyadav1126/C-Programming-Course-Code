#include<stdio.h>
#include<limits.h>
int main(){
    int m,n;
    int max = INT_MIN;
    int min = INT_MAX;
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
    int maxrow = 0, maxcolumn = 0;
    int minrow = 0, mincolumn = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                maxrow = i+1;
                maxcolumn = j+1;
            }
            if(min>arr[i][j]){
                min = arr[i][j];
                minrow = i+1;
                mincolumn = j+1;
            }
        }
    }
    printf("The maximum Element in Matrix is : %d\n And its index Value is : (%d, %d)\n", max, maxrow, maxcolumn);
    printf("The manimum Element in Matrix is : %d\n And its index Value is : (%d, %d)", min, minrow, mincolumn);
}