#include <stdio.h>
 
#define sizeArr 5
 
void fill_array(int arr[], int size);
void print_array(int arr[], int size);
int is_two_same(int size, int arr[]);

int main(void)
{
    
    int arr[sizeArr];

    fill_array(arr, sizeArr);
    
    if(is_two_same(sizeArr, arr))
        printf("YES\n");
    else
        printf("NO\n");

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

int is_two_same(int size, int arr[])
{
    for(int i = 0; i < size; i++)
        for(int j = i + 1; j < size; j++)
            if (arr[i] == arr[j])
                return 1;            
        
    return 0;
}
