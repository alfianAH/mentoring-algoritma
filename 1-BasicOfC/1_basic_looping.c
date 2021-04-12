#include "stdio.h"

void forLooping();
void whileLooping();
void doWhileLooping();
void rightTriangle();

int main(){
    forLooping();
    printf("\n");

    whileLooping();
    printf("\n");

//    doWhileLooping();
//    printf("\n");

//    rightTriangle();

    return 0;
}

void forLooping(){
    for(int i=0; i<10; i++){
        printf("%d", i);
    }
}

void whileLooping(){
    int i = 0;
    while (i < 10){
        printf("%d", i);
        i++;
    }
}

void doWhileLooping(){
    int i = 0;

    do {
        printf("%d", i);
    } while (i != 0);
}

void rightTriangle(){
    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}
