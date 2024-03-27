#include <stdio.h>
 
#define sizeArr 10
 
void fill_array(int arr[], int size);
void print_array(int arr[], int size);
void sort(int arr[], int size);

int main(void)
{
    
    int arr[sizeArr];

    fill_array(arr, sizeArr);
    sort(arr, sizeArr);
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

void sort(int arr[], int size){

    for (int i = 1; i < size; )
        if (i == 0 || (arr[i - 1] % 10) <= (arr[i] % 10))
            i++;
        else {
            int z = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = z;
            --i;
        }

}