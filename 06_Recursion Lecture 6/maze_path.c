#include<stdio.h>
#include<stdlib.h>
int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec) return 1;
    if (cr==er){
        rightWays += maze(cr, cc+1, er, ec);
    }
    if (cc==ec){
        downWays += maze(cr+1, cc, er, ec);
    }
    if (cr<er && cc<ec){
        rightWays = maze(cr, cc+1, er, ec);
        downWays = maze(cr+1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main (){
    int n;
    printf("Enter the no of rows of the maze : ");
    scanf("%d", &n);
    int m;
    printf("Enter the no of column of the maze : ");
    scanf("%d", &m);
    int No_of_ways = maze(1, 1, n, m);
    printf("The Total Ways is : %d", No_of_ways);
    return 0;
}