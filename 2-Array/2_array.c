#include "stdio.h"

void outputNumArr();
void outputStrArr();
void inputNumArr();

int main(){
    outputNumArr();
    printf("\n");
    outputStrArr();
    printf("\n");
//    inputNumArr();
    return 0;
}

void outputNumArr(){
    int numArray[] = {1, 2, 3, 4, 5};

    for(int i=0; i<5; i++){
        printf("%d", numArray[i]);
    }
}

void outputStrArr(){
    char stringArray[] = "string";
    for(int i=0; i<6; i++){
        printf("%c", stringArray[i]);
    }
}

void inputNumArr(){
    int limit = 5;
    int numArr[limit];

    for (int i = 0; i < limit; i++) {
        printf("Masukkan angka:");
        scanf("%d", &numArr[i]);
    }

    for (int i = 0; i < limit; i++) {
        printf("%d,", numArr[i]);
    }
}

