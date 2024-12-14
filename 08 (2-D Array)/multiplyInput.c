#include<stdio.h>
int main(){
    int m;
    printf("Enter the size of row of 1st matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter the size of column of 1st matrix : ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the element for 1st Matrix\n");
    for(int i=0; i<m; i++){
        printf("Enter the element for row %d\n", i+1);
        for(int j=0; j<n; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The 1st Matrix elements are : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int p;
    printf("Enter the size of row of 2nd matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter the size of column of 1st matrix : ");
    scanf("%d", &q);
    int brr[p][q];
    printf("Enter the element for 2nd Matrix\n");
    for(int i=0; i<p; i++){
        printf("Enter the element for row %d\n", i+1);
        for(int j=0; j<q; j++){
            printf("Enter the element at column %d : ", j+1);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("The 2nd Matrix elements are : \n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    if(n!=p){
        printf("The matrix can not be multiplied\n Enter the correct value");
    }
    else{
        int result[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                result[i][j] = 0;
                for(int k=0; k<n; k++){
                    result[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        printf("The multilied Matrix is : \n");
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}