#include <stdio.h>

#define sizeArr 10

void fill_array(int arr[], int size);
void print_array(int arr[], int size);
int change_max_min(int size, int arr[]);
int find_position_max_array(int size, int arr[]);
int find_position_min_array(int size, int arr[]);

int main(){
        
    int arr[sizeArr];

    fill_array(arr, sizeArr);

    change_max_min(sizeArr, arr);

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

int find_position_max_array(int size, int arr[])
{
    int max=arr[0];
    int position = 0;

    for (int i = 1; i < size; i++)
        if (max < arr[i]){
            max = arr[i];
            position = i;
        }            
    
    return position;
}

int find_position_min_array(int size, int arr[])
{
    int min=arr[0];
    int position = 0;

    for (int i = 1; i < size; i++)
        if (min > arr[i]){
            min = arr[i];
            position = i;
        }            

    return position;
}

int change_max_min(int size, int arr[])
{
    int position_max = find_position_max_array(size, arr);
    int position_min = find_position_min_array(size, arr);



    int temp = arr[position_min];
    arr[position_min] = arr[position_max];
    arr[position_max] = temp;
        
    return 0;
}
