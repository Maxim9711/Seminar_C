#include <stdio.h>

#define sizeArr 12

void fill_array(int arr[], int size);
void print_array(int arr[], int size);
void shift_array_right(int arr[], int size);


int main(){

    int arr[sizeArr];

    fill_array(arr, sizeArr);

    for(int i=0; i < 4; i++)
        shift_array_right(arr, sizeArr);

    print_array(arr, sizeArr);

    return 0;
}

void fill_array(int arr[], int size){

    for (int i=0; i < size; i++)
        scanf("%d", &arr[i]);

}

void print_array(int arr[], int size){

    for(int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

}

void shift_array_right(int arr[], int size) {

    int tmp = arr[size-1];

    for (size_t i=size-1; i > 0; i--)
        arr[i] = arr[i-1];

    arr[0] = tmp;
}

