#include <stdio.h>

#define sizeArr 20

void fill_array(int arr[], int size);
void print_array(int arr[], int size);
void sort_even_odd(int arr[], int size);

int main(){

    int arr[sizeArr];
    
    fill_array(arr,sizeArr);
    sort_even_odd(arr,sizeArr);
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

void sort_even_odd(int arr[], int size){
    
    int odd[size];
    int even[size];
    
    int cntrOdd=0;
    int cntrEven=0;
    
    for(int i = 0; i < size; i++)
        if(arr[i] % 2)
            odd[cntrOdd++] = arr[i];    
        else
            even[cntrEven++] = arr[i];

    for(int i=0; i < sizeArr - cntrOdd; i++)
        arr[i] = even[i];

    for(int i=cntrOdd, j=0; i < sizeArr; i++, j++)
        arr[i] = odd[j];
    
}