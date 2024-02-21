#include "stdio.h"

int min(int* arr, int size);

int main(){

    const int size = 5;
    int arr[size];

    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("%d\n", min(arr, size));

    return 0;
}


int min(int* arr, int size){

    int min = arr[0];

    for (int i=1; i<size; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}