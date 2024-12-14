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

    // Transpose Matrix
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

   printf("\nThe transpose matrix is : \n");
   for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
   }
   
//     // rotate Method 1:
//     printf("\nThe rotate matrix is : \n");
//    for(int j=0; j<n; j++){
//     for(int i=m-1; i>=0; i--){
//         printf("%d ", arr[j][i]);
//     }
//     printf("\n");
//    }

    // rotate Method 2:
    for(int i=0; i<n; i++){
        int j=0;
        int k=m-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\nThe rotate matrix is : \n");
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
   }
}