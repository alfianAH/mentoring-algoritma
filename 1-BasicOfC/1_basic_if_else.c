#include "stdio.h"
#include "string.h"

void inputChar(char character);
void inputString(char string[]);

int main(){
    int number_integer = 123;
    char character = 'a';
    char string[] = "alphabet";

    printf("If integer \n");

    if(number_integer >= 1){
        printf("Masuk if");
    } else{
        printf("Masuk else");
    }

//    printf("\n\nIf character\n");
//    inputChar(character);
//
//    printf("\n\nIf string\n");
//    inputString(string);

    return 0;
}

// Fungsi untuk input char
void inputChar(char character){
    char input;

    printf("Masukkan char:");
    scanf("%c", &input);
    printf("Hasil input: %c\n", input);

    // If else statement
    if(input == character){
        printf("Masuk if");
    } else{
        printf("Masuk else");
    }
}

// Fungsi untuk input string
void inputString(char string[]){
    char input[] = "";

    printf("Masukkan char:");
    scanf("%s", &input);
    printf("Hasil input: %s\n", input);

    // If else statement
    if(strcmp(input, string) == 0){
        printf("Masuk if");
    } else if(strcmp(input, "kamu") == 0) {
        printf("Masuk else if");
    } else{
        printf("Masuk else");
    }
}
