#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of row and column both : ");
    scanf("%d", &n);

    int arr[n][n];
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int count = 0;
    int maxc = n-1;
    int tne = n*n; // Total Number Element

    // Filling the matrix in a spiral order with user input
    while(count<tne){
        for(int j=minc; j<=maxc && count<tne; j++){
            printf("Enter element for row %d and column %d: ", minr + 1, j + 1);
            scanf("%d", &arr[minr][j]);
            count++;
        }
        minr++;

        for(int i=minr; i<=maxr && count<tne; i++){
            printf("Enter element for row %d and column %d: ", i + 1, maxc + 1);
            scanf("%d", &arr[i][maxc]);
            count++;
        }
        maxc--;

        for(int j=maxc; j>=minc && count<tne; j--){
            printf("Enter element for row %d and column %d: ", maxr + 1, j + 1);
            scanf("%d", &arr[maxr][j]);
            count++;
        }
        maxr--;

        for(int i=maxr; i>=minr && count<tne; i--){
            printf("Enter element for row %d and column %d: ", i + 1, minc + 1);
            scanf("%d", &arr[i][minc]);
            count++;
        }
        minc++;

    }

    // The actual spiral Matrix 
    printf("The Actual spiral Matrix is : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    // Squaring each element in the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = arr[i][j] * arr[i][j]; // Squaring the element
        }
    }

    // Printing the matrix with each element squared in form of spiral
    printf("The spiral Matrix is : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}