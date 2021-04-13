#include "stdio.h"

void printData(int limit, int data[]);
void bubbleSortAsc(int limit, int data[]);
void bubbleSortDesc(int limit, int data[]);

int main(){
    int limit = 10;
    int data[10] = {12, 41, 13, 142, 12, 68, 54, 85, 100, 69};
    // Smaller dataset
//    int limit = 5;
//    int data[10] = {5, 3, 2, 1, 4};

    printf("Data              : ");
    printData(limit, data);

    printf("\nSorting");
    printf("\nAscending (naik)  : ");
    bubbleSortAsc(limit, data);

    printf("\nDescending (turun): ");
    bubbleSortDesc(limit, data);

    return 0;
}

void printData(int limit, int data[]){
    for(int i = 0; i<limit; i++){
        printf("%d ", data[i]);
    }
}

void bubbleSortAsc(int limit, int data[]){
    int bubble;
    int newLimit = limit - 1;

    for(int i = 0; i <= newLimit-1; i++){
        for(int j = newLimit; j >= i+1; j--){
            if(data[j] < data[j-1]){
                // Simpan data yang ingin ditukar di variabel dummy,
                // karena nanti akan di overwrite dengan data baru
                bubble = data[j];
                data[j] = data[j-1];
                data[j-1] = bubble;
            }
        }
    }

    printData(limit, data);
}

void bubbleSortDesc(int limit, int data[]){
    int bubble;
    int newLimit = limit - 1;

    for(int i = 0; i <= newLimit-1; i++){
        for(int j = newLimit; j >= i+1; j--){
            if(data[j] > data[j-1]){
                // Simpan data yang ingin ditukar di variabel dummy,
                // karena nanti akan di overwrite dengan data baru
                bubble = data[j-1];
                data[j-1] = data[j];
                data[j] = bubble;
            }
        }
    }

    printData(limit, data);
}