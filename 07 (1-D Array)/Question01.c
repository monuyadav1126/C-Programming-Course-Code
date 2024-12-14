// Given an array of marks of student , if the marks of any student is less than 35 print ita roll number . [roll numer here refers to the index of the array]

#include<stdio.h>
int main(){
    // int marks[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};
    // for(int i=0; i<=9; i++){
    //     if(marks[i]<35){
    //     printf("%d ", i);
    //     }
    // }

    int marks[10];
    for(int i=0; i<=9; i++){
        printf("Enter the marks of %d index : ", i);
        scanf("%d", &marks[i]);
    }
    printf("The roll number is : ");
    for(int i=0; i<10; i++){
        if(marks[i]<35){
            printf("%d ", i);
        }
    }
    return 0;
}