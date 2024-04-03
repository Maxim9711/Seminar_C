#include <stdio.h>
#include <math.h>

#define sizeArr 20

void bubble_Sort(int arr[], int size);
void fill_array(int arr[], int size);
void print_array(int arr[], int size);

int main(){

    int arr[sizeArr];

    fill_array(arr, sizeArr);

    bubble_Sort(arr, sizeArr);

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

void bubble_Sort(int arr[], int size){

    int temp = 0;

    for(int i=0; i<size; i++)
        for(int j=i; j<size; j++)
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

}