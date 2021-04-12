#include "stdio.h"

int main(){
    int number_integer = 123;
    double number_double = 12345;
    long number_long = 123;
    float number_float = 3.14;
    char character = 'a';
    char string[] = "alphabet";

    printf("Number integer: %d\n"
           "Number double: %lf\n"
           "Number long: %ld\n"
           "Number float: %f\n"
           "Character: %c\n",
           number_integer, number_double, number_long,
           number_float, character);

    printf("String: %s", string);

    return 0;
}
