#include "stdio.h"

void binarySearch(int input, int data[], int limit);
void selectionSortAsc(int limit, int *data);

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

    selectionSortAsc(limit, data); // Sorting first
    printf("Sorted Data: ");
    for(int i = 0; i<limit; i++){
        printf("%d ", data[i]);
    }

    printf("\nData yang anda masukkan: %d", input);
    printf("\nHasil:");

    binarySearch(input, data, limit); // Search second

    return 0;
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
}

void binarySearch(int input, int data[], int limit){
    int first = 0, middle, end = limit-1;

    while(1){
        middle = (first+end)/2;

        if(input > data[middle]){
            first = middle+1;
        } else if(input < data[middle]){
            end = middle-1;
        } else{
            printf("Ada di %d", middle);
            break;
        }
    }
}
