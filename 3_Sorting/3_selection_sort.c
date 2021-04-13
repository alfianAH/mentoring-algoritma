#include "stdio.h"

void printData(int limit, int data[]);
void selectionSortAsc(int limit, int *data);
void selectionSortDesc(int limit, int *data);

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
    selectionSortAsc(limit, data);

    printf("\nDescending (turun): ");
    selectionSortDesc(limit, data);

    return 0;
}

void printData(int limit, int data[]){
    for(int i = 0; i<limit; i++){
        printf("%d ", data[i]);
    }
}

void selectionSortAsc(int limit, int *data){
    int newLimit = limit-1;
    int selected, min;

    for(int i = 0; i <= newLimit-1; i++){
        selected = i;

        for(int j=i+1; j <= newLimit; j++){
            if(data[j] < data[selected]){
                selected = j;
            }
        }
        min = data[i];
        data[i] = data[selected];
        data[selected] = min;
    }

    printData(limit, data);
}

void selectionSortDesc(int limit, int *data){
    int newLimit = limit-1;
    int selected, max;

    for(int i = 0; i <= newLimit-1; i++){
        selected = i;

        for(int j=i+1; j <= newLimit; j++){
            if(data[j] > data[selected]){
                selected = j;
            }
        }
        max = data[i];
        data[i] = data[selected];
        data[selected] = max;
    }

    printData(limit, data);
}