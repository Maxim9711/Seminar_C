#include <stdio.h>

#define sizeArr 5

int min(int* arr, int size);

int main(){

    int arr[sizeArr];

    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);


    printf("%d\n", min(arr, sizeArr));

    return 0;
}

int min(int* arr, int size){
    
    int min;
    
    if(size != 0)
        min=arr[0];

    for(int i=1; i < size; i++)
        if(arr[i] < min)
            min = arr[i];


    return min;
}