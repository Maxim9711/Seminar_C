#include <stdio.h>

#define sizeArr 12

void fill_array(int arr[], int size);
void print_array(int arr[], int size);
int find_max_array(int size, int arr[]);


int main(){

    int arr[sizeArr];

    fill_array(arr, sizeArr);

    printf("%d\n", find_max_array(sizeArr, arr));


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

int find_max_array(int size, int arr[])
{
    int max=arr[0];

    for (int i = 1; i < size; i++)
        if (max < arr[i])
            max = arr[i];
    
    return max;
}

