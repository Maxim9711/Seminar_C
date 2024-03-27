#include <stdio.h>

#define sizeArr 10

void fill_array(int arr[], int size);
void print_array_without_zero(int arr[], int size);

int main(){
        
    int firstArr[sizeArr];
    int secondArr[sizeArr];

    fill_array(firstArr, sizeArr);

    for(int i=0, j=0; i < sizeArr; i++)
        if((firstArr[i]/10)%10 == 0)
            secondArr[j++] = firstArr[i];
            
    print_array_without_zero(secondArr, sizeArr);

}

void fill_array(int arr[], int size){

    for (int i=0; i < size; i++)
        scanf("%d", &arr[i]);

}

void print_array_without_zero(int arr[], int size){

    for(int i=0; i < size; i++)
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    printf("\n");

}