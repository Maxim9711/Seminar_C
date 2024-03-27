#include <stdio.h>
#include <math.h>

#define sizeArr 5

int main(){

    int arr[sizeArr];

    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("%.3f\n", ((float)(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/sizeArr));

    return 0;
}