#include "stdio.h"

void sequentialSearch(int input, int data[]);

int main(){
    int limit = 10;
    int data[10] = {12, 41, 13, 142, 12, 68, 54, 85, 100, 69};

    printf("Data: ");
    for(int i = 0; i<limit; i++){
        printf("%d ", data[i]);
    }

    int input;
    printf("\nMasukkan data yang ingin dicari:");
    scanf("%d", &input);

    printf("Data yang anda masukkan: %d", input);
    printf("\nHasil:");

    sequentialSearch(input, data);
    return 0;
}

void sequentialSearch(int input, int data[]){
    int flag = 0;
    int index = 0;

    for (int i = 0; i<10; i++){
        if(input == data[i]){
            flag = 1;
            index = i;
            break;
        }
    }

    if(flag == 1){
        printf("Ada di %d", index);
    } else{
        printf("Tidak ada");
    }
}
