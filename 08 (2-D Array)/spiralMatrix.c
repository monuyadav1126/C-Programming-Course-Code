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

    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int count = 0;
    int tne = m*n; // Total Number Element

    while(count<tne){
        for(int j=minc; j<=maxc && count<tne; j++){
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;

        for(int i=minr; i<=maxr && count<tne; i++){
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;

        for(int j=maxc; j>=minc && count<tne; j--){
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;

        for(int i=maxr; i>=minr && count<tne; i--){
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}    