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

    int maxCount = INT_MIN;
    int count;
    int maxIndex;
    for(int i=0; i<m; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(maxCount<count){
            maxCount = count;
            maxIndex = i;
        }
        printf ("\n");
    }
    printf("The no of element is : %d\n And the row is : %d ", maxCount, maxIndex);

}