#include "stdio.h"

char* isNormal(int* arr, int size);

int main(){

    const int size = 3;
    int arr[size];

    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);

    printf(isNormal(arr, size));
    printf("\n");

    return 0;
}


char* isNormal(int* arr, int size){

    int isNormal = arr[0];

    for (int i=1; i<size; i++)
        if (arr[i] < isNormal)
            return "NO";

    return "YES";
}