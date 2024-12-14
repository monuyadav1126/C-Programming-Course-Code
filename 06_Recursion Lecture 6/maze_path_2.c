#include<stdio.h>
int maze2(int n , int m){
    int rightWays = 0;
    int downWays = 0;
    if (n==1 && m==1) return 1;
    if (n==1){ // can not go down
        rightWays += maze2(n, m-1);
    }
    if (m==1){ // can not go right 
        downWays += maze2(n-1, m);
    }
    if (n>1 && m>1){
        rightWays += maze2(n, m-1);
        downWays += maze2(n-1, m);
    }
    int totalWays = rightWays + downWays ;
    return totalWays;
}
int main (){
    int n;
    printf("Enter the no of rows of the maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter the no of column of the maze : ");
    scanf("%d", &m);
    int No_of_ways = maze2(n, m);
    printf("The Total Ways is : %d", No_of_ways);
    return 0;
}