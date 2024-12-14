#include<stdio.h>
int main(){
    struct pokeman{ // user define data types
        int hp; 
        int speed;
        int attack;
    };
    struct pokeman pikachu; // creat a box to store value
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;

    printf("%d\n", pikachu.attack);

    struct pokeman charizard;
    charizard.hp = 80;
    charizard.speed = 200;
    charizard.attack = 20;

    printf("%d", charizard.attack);
    return 0;
}