#include <stdio.h>
void England(){
    printf("Now you are in England.\n"); // 9th line 
    return; // 10th line
}
void Australia(){
    printf("Now You are in Ausralia.\n"); // 7th line
    England(); // calling england // 8th line 
    return; // 11th line
}
void india (){
    printf("Now You are in India.\n"); // 5th line
    Australia(); // calling australia // 6th line
    return; // 12th line 
}
void greet(){
    printf("Good Morning\n"); // 2nd line
    printf("How are you\n"); // 3rd line
    india(); // calling India // 4th line
    return; // 13th line 
}
int main(){
    greet(); // 1st line
    return 0; // 14th line 
}