#include <stdio.h>
#include <stdbool.h>

#define sizeArr 10

void fill_array(int arr[], int size);
void print_array(int arr[], int size);

int main(){

    int arr[sizeArr];

    fill_array(arr, sizeArr);
    int aux[sizeArr] = {0};

    for(int i = 0; i < sizeArr; ++i){
        _Bool found = false;
        for(int j = 0; j < i; ++j)
            if (arr[j] == arr[i]){
                found = true;
                aux[j]++;         
                break;
            }
        if (!found) aux[i]++;
    }

    int max = 0, idx = -1;
    for(int i = 0; i < sizeArr; ++i)
        if (max < aux[i])
            max = aux[idx = i];

    printf("%d\n", arr[idx]);

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